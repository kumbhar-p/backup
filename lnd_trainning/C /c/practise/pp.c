#include<stdio.h>
int main()
{
	int i  = 0;
   int *ptr = &i;
	printf("i - %d\n",&i);
	printf("i - %d\n",i);
	printf("ptr value - %d\n",*ptr);
   ptr--;
	printf("ptr - %d\n",ptr);
	printf("ptr - %d\n",*ptr);
   ptr++;
   ptr--;
   ptr-1;
return 0;
}
