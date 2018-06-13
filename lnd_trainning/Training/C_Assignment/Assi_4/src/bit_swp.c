#include<stdio.h>

int bit_swp(int num,int s,int d)
{
		if(((num >> s) & 1) == ((num >> d) & 1)){}

		else {
				num = num ^(1 << s);
				num = num ^(1 << d);
		}

//		printf("%d\n",num);
		return num;
}
