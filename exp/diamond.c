#include<stdio.h>
int main(void)
{
    int i, j, k,l;
    int row;
    printf("enter the no. rows\n");
    scanf("%d",&row);
    for(i = 1 - row; i < row ; i++) {
        if(i < 0)
            k = -i;
        else if(i >= 0)
            k = i;
        for(j = k; j > 0; j--) 
            printf(" ");
        for(l = 1; l <= 2 * (row - k) - 1; l++)
           printf("*");
        printf("\n");
    }
}

#if 0
//for 
//    *
//   ***
//  *****
    for(i = 1; i <= row ; i++) {
        for(j = 0; j < row - i; j++) 
            printf(" ");
        for(k = 0; k < 2 * i - 1; k++)
           printf("*");
        printf("\n");

#endif
