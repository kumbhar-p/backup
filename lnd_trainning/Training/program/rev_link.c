#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	struct st *link;
}ST;

int add_node(void);
void display(void);
void rev_link();

ST *hptr = NULL;
ST *temp;

int main(void)
{
	char ch;
	
	do {
		add_node();
		printf("do u want to add\n");
		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');
		
	printf("Before\n");
	display();
	rev_link();
	printf("after\n");
	display();

	return 0;
}

int add_node()
{
	ST *new =(ST *) malloc(sizeof(ST));
	printf("enter the roll\n");
	scanf("%d",&new -> roll);
	new -> link = NULL;
	if(hptr == 0) {
		hptr = new;
	}
	else {
		temp -> link = new;
	}
	temp = new;	
	
	return 0;
}

void rev_link()
{
	ST *q = (ST *)malloc(sizeof(ST));
	ST *p = (ST *)malloc(sizeof(ST));
	ST *ptr1 = (ST *)malloc(sizeof(ST));
	
	ptr1 = hptr;
	p = 0;
	
	while(ptr1) {
		q = p;
	printf("----------------------\n");
		p = ptr1;
		p -> link = q;
		ptr1 = ptr1 -> link;
	}

	hptr = p;
}

void display()
{
	ST *ptr = hptr;
	
	while(ptr) {
		printf("%d -> ",ptr -> roll);
		ptr = ptr -> link;
	}
}
