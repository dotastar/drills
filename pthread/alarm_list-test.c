#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "alarm_list.h"

int main() {
	alarm_t *alarm = NULL;

	alarm = malloc(sizeof(alarm_t));
	alarm->alarm_time = 10;
	strncpy(alarm->message, "Message #10", sizeof(alarm->message));
	alarm_list_insert(&alarm_list, alarm);

	alarm = malloc(sizeof(alarm_t));
	alarm->alarm_time = 1;
	strncpy(alarm->message, "Message #1", sizeof(alarm->message));
	alarm_list_insert(&alarm_list, alarm);

	alarm = malloc(sizeof(alarm_t));
	alarm->alarm_time = 2;
	strncpy(alarm->message, "Message #2", sizeof(alarm->message));
	alarm_list_insert(&alarm_list, alarm);

	alarm = malloc(sizeof(alarm_t));
	alarm->alarm_time = 3;
	strncpy(alarm->message, "Message #3", sizeof(alarm->message));
	alarm_list_insert(&alarm_list, alarm);

	alarm = malloc(sizeof(alarm_t));
	alarm->alarm_time = 20;
	strncpy(alarm->message, "Message #20", sizeof(alarm->message));
	alarm_list_insert(&alarm_list, alarm);

	alarm = malloc(sizeof(alarm_t));
	alarm->alarm_time = 2 + time(NULL);
	strncpy(alarm->message, "Message 2 sec after", sizeof(alarm->message));
	alarm_list_insert(&alarm_list, alarm);

	alarm = malloc(sizeof(alarm_t));
	alarm->alarm_time = 5 + time(NULL);
	strncpy(alarm->message, "Message 5 sec after", sizeof(alarm->message));
	alarm_list_insert(&alarm_list, alarm);

	alarm_list_dump(alarm_list);

	do {
		alarm = alarm_list_get_first(&alarm_list);
		if (alarm) {
			printf("%lu %s\n", alarm->alarm_time, alarm->message);
		}
	} while (alarm);

	return 0;
}
