#include<stdio.h>

int fun(int a,int b)
{
	return a+b;
}

int main()
{
	int a=10;
	int b=20;
	int c[5]= {1,3,4,3,4};
	int r;
	int x=1;
	int y=2;
//	printf("%u %u ",&a,&b);
	

//	printf("%u",&c[0]);
	r = x+y;
	r = fun(a, b);

	printf("%d\n",sizeof(main()));
	printf("%d\n",sizeof(fun));
//	printf("%d",y);
}

