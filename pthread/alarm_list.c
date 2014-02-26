#include "alarm_list.h"

alarm_t *alarm_list = NULL;

static pthread_mutex_t alarm_list_mutex = PTHREAD_MUTEX_INITIALIZER;

alarm_t *alarm_list_get_first(alarm_t **alarm_list) {
	alarm_t *alarm = NULL;

	pthread_mutex_lock(&alarm_list_mutex);

	if (*alarm_list != NULL) {
		alarm = *alarm_list;
		*alarm_list = alarm->next;
	}

	pthread_mutex_unlock(&alarm_list_mutex);

	return alarm;
}

void alarm_list_insert(alarm_t **alarm_list, alarm_t *alarm) {
	alarm_t **last = NULL;
	alarm_t *cur = NULL;

	if (alarm == NULL)
		return;

	pthread_mutex_lock(&alarm_list_mutex);

	last = alarm_list;
	cur = *last;
	while (cur && alarm->alarm_time >= cur->alarm_time) {
		last = &cur->next;
		cur = *last;
	}
	alarm->next = cur;
	*last = alarm;

	pthread_mutex_unlock(&alarm_list_mutex);
}

void alarm_list_dump(alarm_t *alarm_list) {
	while (alarm_list) {
		printf("%lu %s\n", alarm_list->alarm_time, alarm_list->message);
		alarm_list = alarm_list->next;
	}
}
