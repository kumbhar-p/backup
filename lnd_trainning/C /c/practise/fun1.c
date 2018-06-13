#include<stdio.h>
void fun(int *ptr)
{
	ptr++;
}
int main()
{
	int arr[5] = {1,3,5,6,7};
	int *ptr;
	ptr=arr;
	fun(ptr);
	printf("%d\n",*ptr);
}
