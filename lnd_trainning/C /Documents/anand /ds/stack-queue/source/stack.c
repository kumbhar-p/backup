#include"headers.h"
int stack(void)
{
    int ch;
    while(1){
        printf("1.push\n2.pop\n3.display\n");
        printf("enter ur choice:");
        ch = myatoi();
        switch(ch){
            case 1:
                push(&head);
                break;
            case 2:
                pop(&head);
                break;
            case 3:
                print(head);
                break;
        }
    }
}
