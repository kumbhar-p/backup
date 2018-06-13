#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	struct st *link;
}ST;

void display(void);
int ring_buf(void);

ST *hptr = NULL;
ST *temp;

int main(void)
{
	char ch;
	
	do {
		ring_buf();
		printf("do u want to add\n");
		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');
		
	display();

	return 0;
}

int ring_buf()
{
	ST *new =(ST *) malloc(sizeof(ST));
	printf("enter the roll\n");
	scanf("%d",&new -> roll);
	
	if(hptr == 0) {
		new -> link = new;
		hptr = new;
	}
	else {
		temp -> link = new;
		new -> link = hptr;
	}
	temp = new;	
	
	return 0;
}

void display()
{
	ST *ptr = hptr;
	printf("%d -> ",ptr -> roll);
	ptr = ptr -> link;
	while(ptr != hptr) {
		printf("%d -> ",ptr -> roll);
		ptr = ptr -> link;
	}
}
