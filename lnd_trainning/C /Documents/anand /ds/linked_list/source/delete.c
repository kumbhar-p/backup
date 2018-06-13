#include "headers.h"
int delete_node(void)
{

	struct tag *temp1 = 0;
//	struct tag *temp2 = 0;
    int pos;
    int count = 0;
    int count2  = 1;
    char ch;
    printf("enter the position:");
    scanf("%d",&pos);
    do {
        add_big(&head);
        printf("continue:");
        getchar();
        ch = getchar();
        count++;
        } while(ch =='y');
    temp1 = head;
    if(count < pos) {
        printf("invalid position:");
        return 0;
    }
    else {
        //		temp2 = temp1;
        while(pos > count2+1){
            printf("value = %d",temp1->roll);
            //					temp2 = temp1;
            temp1 = temp1->link;
            count2++;
        }
        temp1->link = temp1->link->link;
        //	free(temp2);
    }
    return 0;
}
