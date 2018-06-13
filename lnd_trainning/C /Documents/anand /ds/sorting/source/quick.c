#include"headers.h"
int input_quick(void)
{
    int a[max];
    int i = 0;
    int p = 0;
    int q = max-1;
    printf("enter the elements:");
    for(i = 0; i < max ; i++) {
        a[i] = myatoi();
    }

    quicksort(a, p, q);
    for(i = 0 ; i < max ; i++)
        printf("%d  ", a[i]);
    return 0;
}

int quicksort(int a[],int p,int q)
{
    int l;
    if(p < q){
        l = partition(a, p, q);
        quicksort(a, p, l-1);
        quicksort(a, l+1, q);
    }
    return 0;

}
int partition(int a[],int p,int q)
{
    int i = p-1;
    int n2 = a[q];
    int temp;
    int j =0;
    for( j = p;j <= q-1 ; j++) {
        if(a[j] <= n2){
            i = i+1;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i+1];
    a[i+1] = a[q];
    a[q] = temp;

    return i+1;
}
