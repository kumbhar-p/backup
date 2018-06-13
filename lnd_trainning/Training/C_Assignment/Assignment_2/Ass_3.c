#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define BUF 512

typedef struct st 
{
	int que[SIZE];
	int rear;
	int front;
}ST;

ST s;
void insert_rear(int ele);
void delete_front();
void display();
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);


int main(void)
{
	char *op = NULL;
	int c;
	int ele;
	s.rear = s.front = -1;

	if(NULL == (op = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
	
	while(1) {
		printf("enter the op\n1.Enque 2.Deque 3.display 4.exit\n");
			op = my_fgets(op);
			op = remove_n(op);
			c = my_atoi(op);
	
				switch(c) {
				case 1:
					printf("enter the element to Enque\n");
					op = my_fgets(op);
					op = remove_n(op);
					ele = my_atoi(op);
					insert_rear(ele);
					break;
				case 2:
					delete_front();
					break;
				case 3:
					display();
					break; 
				case 4:
					exit(0);
				default:
					printf("wrong input\n");
		}		
	}
	return 0;
}

void insert_rear(int ele)
{
	if(s.rear >= (SIZE-1) && s.front == 0)
		printf("Cir Que overflow\n");
		else {
			if(s.rear == -1 && s.front == -1)
				s.front = s.rear = 0;
				else if(s.rear >= (SIZE-1) && s.front >= 0)
						s.rear = 0;
					else {
						s.rear = s.rear + 1;
						s.que[s.rear] = ele;
						
					}
		}	
}

void delete_front()
{
	if(s.front == -1)
		printf("Queue is underflow\n");
	else {
		if(s.front == s.rear)
			s.front = s.rear = -1;
			else if(s.front == (SIZE - 1))  
					s.front = 0;
				else {
					
		printf("popped ele is %d\n",s.que[s.front]);
		s.front = s.front + 1;
				}
	}	
}

void display()
{
	int i;
	if(s.front == -1)
		printf("cir Que is empty\n");
	else {
		if(s.rear >= s.front) {
			for(i = s.front; i <= s.rear; i++)
			printf("%d ",s.que[i]);
		}
		else {
			for(i = s.front; i < SIZE; i++)
			printf("%d ",s.que[i]);
			for(i = 0; i <= s.rear; i++)
			printf("%d ",s.que[i]);
			
		}
	}
}

char *my_fgets(char *op)
{
 	if(NULL == (fgets(op, BUF, stdin))) {
        perror("fgets failed");
        exit(EXIT_FAILURE);
    }
	return op;
}

int my_atoi(char *op)
{
	int c = 0;
	
	while(*op) {
		c = c*10 + *op - 48;
		op++;
	}
	return c;
}  

