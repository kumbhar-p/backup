/* 2. Implement QUEUE to perform the below operations using arrays.
a. Enqueue
b. Dequeue
c. Display  */

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
int insert_rear(int ele);
int delete_front();
void display();
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

int main(void)
{
	char *op = NULL;
	int c;
	int ele;
s.rear = -1;
s.front = -1;

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
				int res = 0;
				case 1:
					printf("enter the element to Enque\n");
					op = my_fgets(op);
					op = remove_n(op);
					ele = my_atoi(op);
					res = insert_rear(ele);
					
					if(!res)
					printf("Queue overflow\n");
					break;
				case 2:
					res = delete_front();
					if(!res)
					printf("Queue underflow\n");	
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

int insert_rear(int ele)
{
	if(s.rear != SIZE-1) {
		s.rear = s.rear + 1;
		s.que[s.rear] = ele;
		return 1;
	}
	else
		return 0;
}

int delete_front()
{
	if(s.rear >= -1 || (s.front < s.rear)) {
		if(s.que[s.front] == 0 && s.que[s.rear] == 0)
			return 0;
		s.front = s.front + 1;
		printf("popped ele is %d\n",s.que[s.front]);
		s.que[s.front] = 0;
		return 1;
	}
	else
		return 0;
}

void display()
{
	int i;
	if(s.front >= s.rear)
		printf("stack is empty\n");
	else {
		for(i = 0; i < SIZE; i++)
		printf("%d ",s.que[i]);
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

