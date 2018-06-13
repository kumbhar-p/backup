/*  4. Implement Single Linked List
    2. Insert at the end  */

#include<stdio_ext.h>
#include<stdlib.h>

#define BUF 512

typedef struct st
{
	int roll;
	struct st *link;
}ST;

	
ST *hptr = 0;
void display(ST *ptr);
void add_end();
char *my_fgets(char *ch);
int my_atoi(char *op);
char *remove_n(char *);

int main(void)
{
	
	char ch;
	
	 /*if(NULL == (ch = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
   	 }*/

		do {
			add_end();
			printf("do you wan't to add another node y/n\n");
			__fpurge(stdin);
			ch = getchar();
		//	ch = getchar();	
		} while(ch == 'Y' || ch == 'y');

	display(hptr);

	return 0;
}


void add_end()
{
	ST *new = (ST *)malloc(sizeof(ST *));		
	static ST *temp = NULL;
	
	printf("enter the roll\n");
	scanf("%d",&new -> roll);
	
	new -> link = 0;
	if(hptr == NULL) {	
		//ptr = new;
		hptr = new;
		temp = hptr;
	}
	else {
		temp -> link = new;
	}
		temp = new;
}

void display(ST *ptr)
{
	printf("nodes are\n");
	while(ptr) {
		printf("%d -> ",ptr -> roll);
		ptr = ptr -> link;
	}
	
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

	
