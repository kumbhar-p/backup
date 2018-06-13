#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

//char *p;
void *fun()
{
	printf("in thread\n");
	getchar();
//	printf(" in fun pppp = %p\n",p);
	
//	printf("in fun : %p\n", (char *)ptr);
	//return NULL;
	pthread_exit("hello");
}
#if 1
void *fun1()
{
	printf("in thread 1\n");
//	printf(" in fun1 pppp = %p\n",p);
//	printf("in fun : %p\n", (char *)ptr);
	//return NULL;
	pthread_exit("namasthe");
}
#endif
int main(void)
{
	pthread_t t1;
	pthread_t t2;
	int status;
	int status1;
//	p = (char *) malloc(sizeof(char) * 512);
//	printf(" in main pppp = %p\n",p);

	void **ptr;
//	void **ptr1;
	status = pthread_create(&t1, NULL, fun, NULL);
	status1 = pthread_create(&t1, NULL, fun1, NULL);
/*	if(status != 0) {
		perror("thread failed");
		exit(0);
	}*/
	pthread_join(t1, ptr);
	printf("in main : %p\n", (char *)ptr);
	printf("in main : %s\n", (char *)*ptr);
/*
	pthread_join(t2, ptr1);
	printf("in main : %p\n", (char *)ptr1);
	printf("in main : %s\n", (char *)*ptr1);

*/
	return 0;
}
