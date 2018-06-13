#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *fun()
{
	printf("in thread\n");
	pthread_exit("hello");
}

void *fun1()
{
	printf("in thread 1\n");
	getchar();
	pthread_exit("namasthe");
}

int main(void)
{
	pthread_t t1;
	int status;
	int status1;
	void **ptr;
	status = pthread_create(&t1, NULL, fun, NULL);
	printf("s = %d\n", status);
	status1 = pthread_create(&t1, NULL, fun1, NULL);
	printf("s1 = %d\n", status1);
	pthread_join(t1, ptr);
//	printf("in main : %p\n", (char *)ptr);
	printf("in main : %s\n", (char *)*ptr);
	return 0;
}
