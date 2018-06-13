#include<stdio.h>
int main()
{
	typedef struct a
	{
		int a;
		int b;
	}ST;

	ST *p;
	scanf("%d",&(*p).a);
	printf("%d\n",(*p).a);
	return 0;
}
