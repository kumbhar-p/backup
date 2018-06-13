#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<pthread.h>
struct tag{

	int num;	
	char msg[50];
	struct tag *link;

};

struct tag *head;

void fun(void)
{
	
	struct tag *tmp2 , *tmp3;
	tmp2 = head;
	while (tmp2 && tmp2 -> num) {
		sleep(tmp2 -> num);
		printf(" is time to wake up .. %d sec's over :%s\n",tmp2 -> num,tmp2 -> msg);
		tmp3 = tmp2;
		tmp2 = tmp2 -> link;
		head = tmp2;
		free(tmp3);
	}
	
}
int main(void)
{

	pthread_t th_id;
	int status ;
	int ptr;
	//struct tag *head;
	
//	pthread_join(th_id,&ptr);
	 while(1){
		if(head == 0){
			struct tag *temp = malloc(sizeof(struct tag));
			status = pthread_create(&th_id,NULL,fun,NULL);
			printf("alarm :> ");
       	 
        	fgets(temp->msg,50,stdin);
			__fpurge(stdout);
			printf("enter wake up time in sec :");
			scanf("%d",&temp->num);
			temp -> link = NULL;
			head = temp;
		}
		else{
			status = pthread_create(&th_id,NULL,fun,NULL);
			struct tag *tmp;
			struct tag *temp = malloc(sizeof(struct tag));
			tmp = head;
			while (tmp -> link != NULL) {
				tmp = tmp -> link;
			}
			tmp -> link = temp;
			temp -> link = NULL;

			printf("\nalarm :> ");
			printf("enter msg :");
			scanf("%s",temp->msg);
              
           // fgets(temp->msg,50,stdin);
			__fpurge(stdout);
            printf("enter wake up time in sec else :");
            scanf("%d",&temp->num);
			temp->link = head;
			head = temp;

		}
			
	}
//	pthread_exit(NULL);


}
