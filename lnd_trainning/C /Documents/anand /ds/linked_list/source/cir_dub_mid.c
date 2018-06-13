#include"headers.h"
int cir_dub_mid(void)
{


//  struct tag **temp = &head;
    struct tag1 *temp1;
    struct tag1 *temp2;
    int pos;
    int count = 0;
    int count2  = 1;
    char ch;
    printf("enter the position:");
    scanf("%d",&pos);
    do {
        cir_dub_add_big(&head1);
        printf("continue:");
        getchar();
        ch = getchar();
        count++;
    }while(ch =='y');
    temp1 = head1;
    if(count < pos) {
        printf("invalid position:");
        return 0;
    }
    else {
        temp2 = malloc(sizeof(struct tag1));
        printf("enter value to insert");
        scanf("%d",&temp2->roll);

        if(pos == 1) {
            temp1->prev->next = temp2;
            temp2->prev = temp1->prev;
            temp2->next = temp1->next;
            temp1->next->prev = temp2;
        }
        else {
            temp1=head1;
            while(pos-1 > count2) {
                printf("value = %d",temp1->roll);
                temp1 = temp1->next;
                count2++;
            }
            temp2->next  = temp1->next;
            temp2->prev = temp1->prev;
            temp1->next = temp2;
            temp1->next->prev = temp2;

        }
        //        return 0;
    }

	return 0;

}
