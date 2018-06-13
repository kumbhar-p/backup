#include<stdio.h>

void fun()
{
	int a[5],
		int i;
	for(i = 0; i < 5; i++)
		printf("%d ",a[i]);
}

int main()
{
	int a[5],i;
	for(i = 0; i < 5; i++){
		a[i] = i;
}	fun();
return 0;
}
		
