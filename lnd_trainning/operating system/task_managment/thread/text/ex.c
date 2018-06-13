#include <stdio.h>

int a;
int main()
{
	if(fork())
	{
	a = 10;
	
		printf("%d\n",main);
//	wait(NULL);
	printf("%d\n",a);
	}	
	else
		printf("%d\n",main);
		printf("%d\n",a);

	return 0;
}
