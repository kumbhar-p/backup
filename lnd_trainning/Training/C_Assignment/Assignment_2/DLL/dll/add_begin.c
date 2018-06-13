#include"header.h"

extern ST *hptr;
extern int count;

void add_begin()
{

        ST *new = (ST *) malloc(sizeof(ST));

        printf("Enter the roll no...\n");
        scanf("%d",&new->roll);

        if(hptr == 0) {
                new -> llink = new -> rlink = NULL;
                hptr = new ;
        }
        else {
                new -> llink =  NULL;
                new -> rlink = hptr;
                hptr = new;
                new -> rlink -> llink = new;
        }
}
void display()
{
        ST *ptr = hptr;
	count = 0;
        while(ptr){
        printf("%d ",ptr->roll);
        ptr = ptr -> rlink;
	count++;
        }
	printf("\n%d\n",count);
}

