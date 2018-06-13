// exp on thread are sharing global data or not
#include<stdio.h>
#include<pthread.h>
int a = 10; // global data
void *thread_fun()
{
	printf("i am in thread function\n");
	a = a+10; // here am modifying the data
	printf("in function addr of a : %p\n", &a);
	return NULL;
}

int main(void)
{
	int status;
	pthread_t th_id;
	
	status = pthread_create(&th_id, NULL, thread_fun, NULL);
	if(status != 0) {
		printf("thread failed : %d\n", status);
	}
	
	getchar();
	printf("a = %d\n", a); //here  am printing global data
	printf("in main addr of a : %p\n", &a);
	pthread_exit(NULL);	
	return 0;
}

