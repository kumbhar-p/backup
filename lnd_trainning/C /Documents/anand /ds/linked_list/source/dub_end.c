#include"headers.h"
int input_dub_inser_end(void)
{
//    struct tag1 *temp = head1;
    char ch;
    do{
 		dub_add_end(&head1);
   		printf("continue:");
   		getchar();
   		ch = getchar();
  }while(ch == 'y');
	return 0;
}
int dub_add_end(struct tag1 **p)
{

	 struct tag1 *temp;
    struct tag1 *temp1 = *p;
    temp = malloc(sizeof(struct tag1));
    printf("enter roll:");
    scanf("%d",&temp->roll);
    temp->next = NULL;
    temp->prev=NULL;
    if(*p == 0)
    {
//  printf("ertert");
        *p = temp;
//      (*p)->next = temp;
    }
    else{
    while(temp1->next){
        temp1= temp1->next;
    }
	temp1->next = temp;
    temp->prev = temp1;
    temp1 = temp;

	}
	return 0;
}

