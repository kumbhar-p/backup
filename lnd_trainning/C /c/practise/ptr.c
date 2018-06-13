#include<stdio.h>

typedef int (*INTARRY)[10];
typedef int (INTARR)[10];

int main()
{
	INTARRY a;
	INTARR b = {1,3,4,2,8};

	a = &b;
	printf("%d\n",sizeof(INTARRY));
	printf("%d\n",*(*(a) + 4));
	
/*	void *n;
	*(int *)n = 4;*/
	
/*	int n = 0x5042;
	char *p;
	p = (char *)&n;
	printf("%d\n",*p);*/

/*	char a[6] = {1,3,2,4,5,6};
	printf("%u ",a);
	printf("%u ",a + 1);
	printf("%u ",&a + 1);*/


	return 0;
}
