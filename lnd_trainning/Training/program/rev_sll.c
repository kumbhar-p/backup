#include<stdio.h>
#include<stdlib.h>

typedef struct sll{

	int rollno;
	struct sll *link;
}SLL;

void add_begin(SLL **);
void print(SLL *);
void rev_link(SLL **ptr);

int main(void)
{
	char ch;
	SLL *headptr = NULL;

	do{
		add_begin(&headptr);
		printf("do you want to add...(y/Y)\n");
		scanf(" %c",&ch);
	}
	while((ch == 'y') || (ch == 'Y'));

	printf("\n---Before-Reverse---\n");
	print(headptr);
	rev_link(&headptr);
	printf("\n---After-Reverse---\n");
	print(headptr);
	printf("\n");

	return 0;
}

void add_begin(SLL **ptr)
{
	SLL *temp;
	if(NULL == (temp = malloc(sizeof(SLL)))) {
		printf("malloc failed");
		exit(0);
	}

	printf("enter the rollno...\n");
	scanf("%d",&temp->rollno);

	temp->link = *ptr;
	*ptr = temp;
}

void print(SLL * p)
{
	while(p){

		printf("%d ",p->rollno);
		printf("%p \n",p);
		p = p->link;
	}
}

void rev_link(SLL **ptr)
{
	SLL *r;
	SLL *q = 0;
	while(*ptr){
		r = q;
		q = *ptr;
		(*ptr) = (*ptr)->link;
		q->link = r;
	}
	(*ptr) = q;
}
