/*
 * Tue Feb 25 23:30:54 EST 2014
 *
 * My implementation of alarm-mutex.
 *
 * Following the design of alarm_mutex in
 *
 *     David R. Butenhof, "Programming with POSIX Threads." Addison Wesley, 1997.
 */

#include <pthread.h>
#include <time.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "alarm_list.h"

void *alarm_thread(void *arg) {
	struct timespec timeout = {0, 0};
	alarm_t *alarm = NULL;
	time_t sleep_time = 0;
	time_t now = 0;

	while (1) {
		alarm = alarm_list_get_first(&alarm_list);
		sleep_time = 1;
		if (alarm != NULL) {
			now = time(NULL);
			if (now >= alarm->alarm_time)
				sleep_time = 0;
			else
				sleep_time = alarm->alarm_time - now;
		}
		if (sleep_time > 0) {
			timeout.tv_sec = sleep_time;
			while (nanosleep(&timeout, &timeout) && errno == EINTR);
		}
		if (alarm != NULL) {
			printf("at(%ld) expected(%ld) %s\n", time(NULL), alarm->alarm_time, alarm->message);
			free(alarm);
		}
	}

	return NULL;
}

void process_input(void) {
	char line[128];
	alarm_t *alarm = NULL;
	time_t now = 0;

	while (1) {
		if (alarm == NULL)
			alarm = malloc(sizeof(alarm_t));
		printf("Alarm>");
		if (fgets(line, sizeof(line), stdin) == NULL)
			return;
		if (sscanf(line, "%ld %127s", &alarm->alarm_time, alarm->message) < 2)
			continue;
		now = time(NULL);
		alarm->alarm_time += now;
		alarm_list_insert(&alarm_list, alarm);
		alarm = NULL;
	}
}

int main() {
	pthread_t thread;
	pthread_create(&thread, NULL, alarm_thread, NULL);
	process_input();
	return 0;
}
