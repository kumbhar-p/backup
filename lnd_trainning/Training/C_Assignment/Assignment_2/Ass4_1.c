/* 4. Implement Single Linked List
	1. Insert at the beginning  */

#include<stdio_ext.h>
#include<stdlib.h>

#define BUF 512

typedef struct st
{
	int roll;
	struct st *link;
}ST;

void display(ST *ptr);
void add_begin(ST **ptr);
char *my_fgets(char *ch);
int my_atoi(char *op);
char *remove_n(char *);
char *input_validation(char *);
int main(void)
{
	
	ST *hptr = NULL;
	char *ch;
	if(NULL == (ch = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
	

	do {
		add_begin(&hptr);
		printf("do you wan't to add another node y/n\n");
	//	__fpurge(stdin);
	//	ch = getchar();
	ch = my_fgets(ch);
    ch = remove_n(ch);
	} while(*ch == 'Y' || *ch == 'y');

	display(hptr);

	return 0;
}


void add_begin(ST **ptr)
{
	ST *new = (ST *)malloc(sizeof(ST *));		
	char *str;
	
	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

	printf("enter the roll\n");
	str = my_fgets(str);
    str = remove_n(str);
	str = input_validation(str);
    new -> roll = my_atoi(str);
	printf("%d ",new -> roll);

	if(*ptr == NULL) {	
		new -> link = NULL;
		*ptr = new;
		free(new);
		new = NULL;
	}
	else {
		new -> link = *ptr;
		*ptr = new;
		free(new);
		new = NULL;
	}
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
        c = c * 10 + (*op) - '0';
        op++;
    }
    return c;
}

char *my_fgets(char *op)
{
    if(NULL == (fgets(op, BUF, stdin))) {
        perror("fgets failed");
        exit(EXIT_FAILURE);
    }
    return op;
}	
