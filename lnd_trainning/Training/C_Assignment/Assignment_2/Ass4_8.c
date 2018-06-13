/* 4. Implement Single Linked List
	8. Insert at the middle  */

#include<stdio_ext.h>
#include<stdlib.h>
#include<limits.h>

#define BUF 512

void add_end();
void display();
int add_middle();
char *my_fgets(char *str);
int my_atoi(char *op);

typedef struct st
{
	int roll;
	struct st *link;
}ST;

ST *hptr = 0;

int main(void)
{
	char ch;
	
	do {
		printf("enter the roll\n");
		add_end();
		printf("do u want to add node\n");
		ch = getchar();
		__fpurge(stdin);
	}while(ch == 'y' || ch == 'Y'); 
	display();

	while(1) {
		printf("\nenter the roll no to add\n");
		add_middle();
		printf("do u want to continue\n");
		ch = getchar();
		if(ch == 'y' || ch =='Y')
			continue;
		else
			break;
	}
	display();
	return 0;	
}

void add_end()
{
	ST *temp = hptr;
	ST *new = (ST *)malloc(sizeof(ST));
	char *str = NULL;
    
	if(NULL == (str = malloc(sizeof(char)* BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

	str = my_fgets(str);
	new -> roll = my_atoi(str);
	new -> link = 0;
	
	if(hptr == 0)
		hptr = new;
	else {
		while(temp -> link != NULL)
			temp = temp -> link;
			temp -> link = new;
		}
}

int add_middle()
{
	ST *new = (ST *)malloc(sizeof(ST));
	ST *temp = hptr;
	ST *prev = hptr;
	char *str = NULL;
    
	if(NULL == (str = malloc(sizeof(char)* BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
	
	str = my_fgets(str);
	new -> roll = my_atoi(str);

	while(temp -> link) {
		if((new -> roll == hptr -> roll) || new -> roll < hptr -> roll) {
			new -> link = hptr;
			hptr = new;
		}
		else {
			if(new -> roll <= temp -> roll) {
				new -> link = prev -> link;
				prev -> link = new;
			}
		}
	
		prev = temp;
		temp = temp -> link;
	}	
		return 0;
}

void display()
{
	ST *ptr = hptr;
	while(ptr) {
		printf("%d -> ",ptr -> roll);
		ptr = ptr -> link;
	}
}
