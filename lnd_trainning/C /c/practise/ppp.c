#include<stdio.h>

int main()
 {
                int a = 10;
                int *iptr = &a;
                *iptr = 20;
               printf("%d %d\n",a,*iptr);
                return 0;
  }
