
#include<stdio_ext.h>
#include<stdlib.h>

#define BUF 512

typedef struct st
{
	int roll;
	int p;
	struct st *link;
}ST;

	
ST *hptr = NULL;
void display();
void add_end();
void delete();

int main(void)
{
	
	char ch;
	
		do {
			add_end();
			printf("do you wan't to add another node y/n\n");
			scanf(" %c",&ch);
		} while(ch == 'Y' || ch == 'y');

	display();
	delete();

	return 0;
}


void add_end()
{
	ST *new = (ST *)malloc(sizeof(ST *));		
	static ST *temp = NULL;
	
	printf("enter the priority\n");
	scanf("%d",&new -> p);
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
}

void display()
{
	ST *ptr = hptr;
	printf("nodes are\n");
	printf("priority  data\n");
	while(ptr) {
		printf("%d - %d\n",ptr -> p,ptr -> roll);
		ptr = ptr -> link;
	}
	
}

void delete()
{
	ST *temp = hptr;
	ST *temp1 = hptr;
	ST *ptr;
	int min;
	int c = 0;

	min = temp -> p;

	while(temp -> link != NULL) {
		if(!(min < temp -> link -> p)) {
			min = temp -> link -> p;
			ptr = temp -> link;
			c++;
		}
 
			temp = temp -> link;
	}
	
	if(c > 1) {
		printf("count - %d\n",c);
		while(temp1 -> p != min)  
			temp1 = temp1 -> link;
			ptr = temp1;
		
	}
	
	temp1 = hptr;
	while(temp1 -> link != ptr) {
		temp1 = temp -> link;
	}
	printf("deleted ele is %d\n", ptr -> roll);
	temp1 -> link = ptr -> link;
	free(ptr);

}
	

