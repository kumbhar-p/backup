/* 1. Implement STACK to perform the below operations using arrays.
a. push
b. pop
c. Display  */


#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define BUF 512

typedef struct st 
{
	int stk[SIZE];
	int top;
}ST;

ST s;
int push(int ele);
int pop();
int display();
char *remove_n(char *);
char *my_fgets(char *op);
int my_atoi(char *op);

int main(void)
{
	char *op = NULL;
	int c;
	int ele;
	s.top = -1;

	if(NULL == (op = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
	
	while(1) {
		printf("enter the op\n1.push 2.pop 3.display 4.exit\n");
			op = my_fgets(op);
			op = remove_n(op);
			c = my_atoi(op);
	
				switch(c) {
				case 1:
					printf("enter the element to push\n");
					op = my_fgets(op);
					op = remove_n(op);
					ele = my_atoi(op);
					push(ele);
					break;
				case 2:
					pop();
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

int push(int ele)
{
	if(s.top == (SIZE-1))
		printf("stack is full\n");
	else {
		s.top = s.top + 1;
		s.stk[s.top] = ele;
	}
	return 0;
}

int pop()
{
	if(s.top == -1)
		printf("stack is empty\n");
	else {
		printf("popped ele is %d\n",s.stk[s.top]);
		s.top = s.top - 1;
	}
	return 0;
}

int display()
{
	int i;
	if(s.top == -1)
		printf("stack is empty\n");
	else {
		for(i = 0; i < SIZE; i++)
		printf("%d\n",s.stk[i]);
	}
	return 0;
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

