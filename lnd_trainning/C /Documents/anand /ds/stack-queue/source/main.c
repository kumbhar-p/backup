#include"headers.h"
extern int count;
int main(void)
{
    int ch;
    while(1){
        printf("\n1.stack\n2.queue\n3.exit\n");
        printf("enter ur choice:");
        ch = myatoi();
        switch(ch){
            case 1:
                stack();
                break;
            case 2:
                queue();
                break;
            case 3:
                exit(0);
        }
    }
}

