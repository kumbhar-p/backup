#include"headers.h"
int inser_mid(void)
{
    struct tag *temp1 = NULL;
    struct tag *temp2 = NULL;
    int pos;
    int count = 0;
    int count2  = 1;
    char ch;
    printf("enter the position:");
   __fpurge(stdin);
   pos = myatoi(); 
    do{
        add_big(&head);
        printf("do you want to continue:");
        __fpurge(stdin);
        ch = getchar();
        count++;
    }while(ch =='y');
    temp1 = head;
    if(count < pos){
        printf("invalid position:");
        return 0;
    }
    else{
        while(pos > count2+1){
            printf("value = %d",temp1->roll);
            temp1 = temp1->link;
            count2++;
        }
        temp2 = malloc(sizeof(struct tag));
        if( temp2 == NULL){
            printf("malloc failed:\n");
            return 0;
            }
        printf("enter value to insert : ");
        __fpurge(stdin);    
        temp2 -> roll = myatoi();
        temp2->link = temp1->link;
        temp1 ->link = temp2;

    }
    return 0;
}
