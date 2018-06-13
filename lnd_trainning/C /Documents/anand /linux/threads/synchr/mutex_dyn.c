#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include "error.h"
typedef struct tag{
	pthread_mutex_t lock;
	int value;
}my_struct_t;
int main(int argc,char **argv)
{
	my_struct_t *data;
	int status;
	data = malloc(sizeof(my_struct_t));
	if(data == NULL)
		printf("error in malloc\n");
	data->value = 40;
	printf("value = %d\n",data->value);
	status = pthread_mutex_init(&data->lock,NULL);
	if(status != 0)
		printf("error in mutex init\n");
//		err_abort(status,"init mutex");
	status = pthread_mutex_destroy(&data->lock);
	printf("status = %d\n",status);
//	if(status != 0)
//		err_abort(status,"destroy mutex");
//		printf("error in mutex destroy\n");
	free(data);
}
