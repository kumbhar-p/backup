/*  3. Write a program to create a thread using pthread_create() and experiment the following 
	will both Thread Group Leader (TGL) and the thread share the same heap ?
*/

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *thread_fun();

char *ptr;
int main(void)
{
	int status;
	pthread_t th_id;
	
	if(NULL == (ptr = (char *)malloc(sizeof(char) * 512))){
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
		
	status = pthread_create(&th_id, NULL, thread_fun, NULL);
	if(status != 0) {
		printf("thread failed : %d\n", status);
	}
	getchar();
	printf("ptr in main = %s\n", ptr); 
	printf("in main addr of ptr : %p\n", ptr);
	pthread_exit(NULL);	
	return 0;
}

void *thread_fun()
{
	printf("i am in thread function\n");
	printf("in function addr of ptr : %p\n", ptr);
	ptr = "hello";

	printf("ptr in fun - %s\n",ptr);
    return NULL;
}

