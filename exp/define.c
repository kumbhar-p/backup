#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr = NULL;
    
    int n,i;

    scanf("%d",&n);
    arr =  malloc(sizeof(int)*n);
    for (i =0 ; i<n;i++) {
        printf("%d -- ",i);
        scanf("%d",&arr[i]);
    }
    for (i =0 ; i<n;i++)
        printf("%d ",arr[i]);

}
