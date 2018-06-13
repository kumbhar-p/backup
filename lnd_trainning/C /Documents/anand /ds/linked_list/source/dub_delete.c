#include"headers.h"
int dub_delete(void)
{


//  struct tag **temp = &head;
    struct tag1 *temp1;
//    struct tag1 *temp2;
    int pos;
    int count = 0;
    int count2  = 1;
    char ch;
    printf("enter the position:");
    scanf("%d",&pos);
    do{
        dub_add_big(&head1);
        printf("continue:");
        getchar();
        ch = getchar();
        count++;
        }while(ch =='y');
    temp1 = head1;
    if(count < pos){
        printf("invalid position:");
        return 0;
    }
    else{
            while(pos > count2){
                    printf("value = %d",temp1->roll);
                    temp1 = temp1->next;
                    count2++;
                }
			temp1->prev->next = temp1->next;
            temp1->next->prev = temp1->prev;
          




	}
	return 0;
}
