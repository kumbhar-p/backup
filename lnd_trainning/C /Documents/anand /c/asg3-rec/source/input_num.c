#include"headers.h"
int input_num(void)
{
    int num;
    int i;
    int count = 0;
    int x;
    printf("enter the number:");
    num = myatoi();
    x = num-1;
    if(num > 0) {
        for(i = 1; i<=x ; i++) {
            if( i + x == num ) {
                printf("i+x = %d\n",i+x);
                count++;
            }
            x--;
        }
    }
    else {
        x = num+1;
        for(i = -1 ;i >= x;i--) {
            if((i+x) == num) {

                count++;
            }
            x++;
        }
    }

    printf("count = %d\n",count);
    return 0;
}


