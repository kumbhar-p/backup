#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<time.h>
pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;
#define MAX 50
struct tag{

	unsigned int num;
	time_t time;	
	char msg[50];
	struct tag *link;

};
print(struct tag *pt)
{
	while(pt){
		printf("%d\n",pt->num);
		pt = pt->link;
	}
}
struct tag *head;

void *fun(void *p)
{
	struct tag *tmp2 , *tmp3;
	time_t t;
	tmp2 = head;
	while (1) {
		if(head == NULL){
        	sleep(1);
    	}	
		else{ 
			if(head->time == time(NULL)){
			pthread_mutex_lock(&m1);
			tmp2 = head;
			head = head -> link;
		//	pthread_mutex_unlock(&m1);
			t = time(NULL);
			printf("current = %d\n",time(NULL));
			printf("current time --------->=%s\n",ctime((const time_t *)&t));
			printf("Sub thread is time to wake up .. %s sec's over :%s current time %s\n",
						ctime((const time_t *)&(tmp2->time)),tmp2->msg, ctime((const time_t *)&t));
			free(tmp2);
			pthread_mutex_unlock(&m1);
			}
	
		}
	}
}
int main(void)
{

	pthread_t th_id;
	int status ;
	struct tag *ptr;
	struct tag *temp;
	int val ;
	int val1;
	int i = 0;
	char buf[MAX];
	time_t ti;
	ti = time(NULL);
	pthread_create(&th_id,NULL,fun,NULL);
	 while(1){

		fflush(stdin);		
		struct tag *alarm = malloc(sizeof(struct tag));
		printf("Enter seconds and message");
		fgets(buf,sizeof(buf),stdin);
		sscanf(buf,"%d %[^\n]", &alarm->num,alarm->msg);
		alarm->time = alarm->num + time(NULL);	
		ti = time (NULL);
		printf("main current = %d\n",time(NULL));
		printf(" Main thread is time to wake up .. %s sec's over :%s \n ",
			ctime(&(alarm->time)),alarm->msg);
		if (NULL == head || (head->num > alarm->num)) {
				pthread_mutex_lock(&m1);
                alarm->link = head;
                head = alarm;
				pthread_mutex_unlock(&m1);
            }
            else {
                temp = head;
				pthread_mutex_lock(&m1);
                while (temp != NULL) {
                    if (NULL == temp->link || temp->link->num > alarm->num) {
                        alarm->link = temp->link;
                        temp->link = alarm;
                        break;
                    }
                    temp = temp->link;
                }
		pthread_mutex_unlock(&m1);
            }
		//pthread_mutex_unlock(&m1);
		}
	return 0;
}
			
