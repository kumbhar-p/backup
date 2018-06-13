#include<stdio.h>

void display(int num)
{
    int i;
        for(i = 31; i >= 0; i--) {
                printf("%d",num >> i & 1);
                if(i % 8 == 0)
                      printf(" ");
        }
        printf("\n");
}
