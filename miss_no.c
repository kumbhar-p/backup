#include<stdio.h>
#include"exp.h"
int b ;
/* getMissingNo takes array and size of array as arguments*/
int getMissingNo (int a[], int n)
{
    int i, total;
    total  = (n+1)*(n+2)/2;   
    for ( i = 0; i< n; i++)
        total -= a[i];
    return total;
}

/*program to test above function */
int main()
{
    int a[] = {1,2,4,5};
    int miss = getMissingNo(a,4);
    printf("%d", miss);
    getchar();
}


