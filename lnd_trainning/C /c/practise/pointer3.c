#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *str[10];
	int i;	
	for(i = 0; i < 10; i++)
		str[i] = (int *)malloc(sizeof(int *));
	for(i = 0; i < 10; i++)
		scanf("%d",str[i]);
	for(i = 0; i < 10; i++)
		printf("%p - %d\n",str[i], *(str[i]));
return 0;
}
