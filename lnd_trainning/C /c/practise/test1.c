#include<stdio.h>
//	const int num = 100;
int main()
{
	int *ptr = NULL;
//	char ch ='a';
	const int num = 100;
	
//	printf("%c\n",ch); 
	ptr = &num;
	*ptr = 200;
	printf("%d",*ptr);
	printf("%d\n",sizeof(long int)); 
}
