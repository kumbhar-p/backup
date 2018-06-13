#include<stdio.h>
void fun();

int main(void)
{
	int a=10;
	fun();
	printf("%d\n",a);
}

void fun()
{
	int p;
	int *q=&p;
	while(*q!=10)
	q++;
	*q=100;
	

}
