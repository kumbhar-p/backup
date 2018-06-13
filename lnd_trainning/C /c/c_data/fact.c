#include<stdio.h>
int main()
{
	int x=1,y=1,z=0;
	printf("%d %d ",x,y);
	while(z<89)
	{
		z=x+y;
		printf("%d ",z);
		y=x;
		x=z;
	}
}
