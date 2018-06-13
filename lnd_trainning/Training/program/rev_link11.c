#include<stdio.h>
#include<stdlib.h>

typedef struct sll{

	int rollno;
	struct st *link;
}ST;

void add_begin(ST **);
void print(ST *);
void rev_link(ST **ptr);

int main(void)
{
	char ch;
	ST *hptr = NULL;

	do{
		add_begin(&hptr);
		printf("do you want to add...(y/Y)\n");
		scanf(" %c",&ch);
	}
	while((ch == 'y') || (ch == 'Y'));

	printf("\n---Before-Reverse---\n");
	print(hptr);
	rev_link(&hptr);
	printf("\n---After-Reverse---\n");
	print(hptr);
	printf("\n");

	return 0;
}

void add_begin(ST **ptr)
{
	ST *temp;
	if(NULL == (temp = malloc(sizeof(ST))));

	printf("enter the rollno...\n");
	scanf("%d",&temp->rollno);

	temp->link = *ptr;
	*ptr = temp;
}

void print(ST *p)
{
	while(p){

		printf("%d ",p->rollno);
		printf("%p \n",p);
		p = p->link;
	}
}

void rev_link(ST **ptr)
{
	ST *r;
	ST *q = 0;
	while(*ptr){
		r = q;
		q = *ptr;
		(*ptr) = (*ptr)->link;
		q->link = r;
	}
	(*ptr) = q;
}
