#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s = 123;
	int sum = 0;
    for( ; s; sum = sum * 10 + s % 10,  s = s / 10);
//		printf("%d ",sum);
		sum = abs(123 - sum);
        printf("%d\n", sum);
	
}
