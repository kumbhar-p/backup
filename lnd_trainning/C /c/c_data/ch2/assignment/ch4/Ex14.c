/* Exercise 4-14. Define a macro swap(t,x,y) that interchanges two arguments of type t. (Block structure will help.)  */

#include<stdio.h>

#define SWAP(t,x,y) { t temp;      \
                      temp=x;      \
                      x=y;         \
                      y=temp;      \
                     }

int main(void)
{
	int x = 10;
	int y = 20;
	printf("before swap\n");
	printf("x = %d y = %d\n",x,y);
	SWAP(int ,x, y);
	printf("after swap\n");
	printf("x = %d y = %d\n",x,y);

	return 0;
}	

