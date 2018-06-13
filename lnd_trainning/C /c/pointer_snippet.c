#include<stdio.h>

int main(void)
{
    int arr[3][5] = { {1,2,3,4,5},
                          {6,7,8,9,10},
                            {11,12,13,14,15}};

    int **p = arr;

    printf("arr is %p\n", arr);
    printf("arr+1 is %p\n", arr+1);
    printf("p is %p\n", p);
    printf("p+1 is %p\n", p+1);

    printf(" *++p = %d \n ", *++p);
    printf(" *p++ = %d \n ", *p++);
    printf(" *(p+1) = %d \n", *(p + 1));
    
    printf(" &arr = %p \n ", &arr);
    printf(" arr = %p \n ", arr);
    printf(" *arr = %p \n ", *arr);
    
    printf(" &arr + 1 = %p\n ", &arr + 1);
    printf(" arr + 1 = %p\n ",  arr + 1);
    printf(" *arr + 1 = %p\n ", *arr + 1);
    
    printf(" **arr = %d \n ", **arr);
    printf(" *(*arr + 1) = %d\n ", *(*arr + 1));
    printf(" *(arr + 1) = %p\n ", *(arr + 1));
    printf(" *(*(arr + 1) = %d\n ", *(*(arr + 1)));
    printf(" **(arr + 1) = %d\n ", **(arr + 1));
    printf(" *(*(arr + 2) + 3) = %d\n", *(*(arr + 2 ) + 3));

    return 0;
}

