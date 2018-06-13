#include<stdio.h>

int main( void )
{
    int arr[3][5] = { {1,2,3,4,5},
                          {6,7,8,9,10},
                            {11,12,13,14,15}};

    int **p; 
	p = arr;

    printf("arr is %p\n", arr);
    printf("arr+1 is %p\n", arr+1);
   	printf("p is %p\n", p);
    printf("p+1 is %p\n", p+1);

    printf(" *p = %d \n", *p);
    printf(" *(p+1) = %d \n", *(p + 1));
    printf(" *(p+2) = %d \n", *(p + 2));
    
    
    return 0;
}
