#include<stdio.h>

int main()
{
register int i = 10;
int *ptr = &i;                                               // o/p - error
printf("%d", *ptr);
return 0;
}
