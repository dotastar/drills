#ifndef _WTS_ALARM_LIST_
#define _WTS_ALARM_LIST_

#include <time.h>
#include <pthread.h>
#include <stdio.h>

#define ALARM_MESSAGE_SIZE 128

typedef struct alarm_struct {
	struct alarm_struct *next;
	time_t alarm_time;
	char message[ALARM_MESSAGE_SIZE];
} alarm_t;

extern alarm_t *alarm_list;

extern alarm_t *alarm_list_get_first(alarm_t **alarm_list);

extern void alarm_list_insert(alarm_t **alarm_list, alarm_t *alarm);

extern void alarm_list_dump(alarm_t *alarm_list); 

#endif
