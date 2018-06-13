/* 4. Insert before a given position
	5. Insert after a given position */


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
void add_after_pos();
int count = 0;

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
		} while(ch == 'Y' || ch == 'y');
	
		display(hptr);
		add_after_pos();
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
        hptr = new;
        temp = hptr;
    }
    else {
        temp -> link = new;
    }
        temp = new;
	count++;
}


void add_after_pos()
{
	ST *new = (ST *)malloc(sizeof(ST *));		
	ST *temp = hptr;
	int pos;
up:
	printf("enter the pos to add the node\n");
	scanf("%d",&pos);	
	if(pos > count) {
		printf("Wrong input\n");
		goto up;
	}
	else {
		printf("enter the roll\n");
		scanf("%d",&new -> roll);
	}
	
	if(pos == 1) {	
		new -> link = hptr;
		hptr = new;
	}
	else {
		pos = pos - 1;
		while(pos) {
			temp = temp -> link;
			pos--;
		}
		new -> link = temp -> link;
		temp -> link = new;
	}
}

void display(ST *ptr)
{
	ST *temp1 = ptr;
	printf("nodes are\n");
	while(temp1) {
		printf("%d -> ",temp1 -> roll);
		temp1 = temp1 -> link;
	}
	printf("\n");
	
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

	
