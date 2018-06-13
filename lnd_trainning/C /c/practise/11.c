#include<stdio.h>


int main()
{
	int *p = 100;
	*p = 10;
	printf("%d\n",*p);
}
/*
int main()

{

   int x = 65, *p = &x;

   

   void *q=p;

   char *r=q;

   printf("%c",*r);

}
*/

/*
int main()
{
	int *p;
	p = 100;
	*p = 19;
	printf("%d\n",*p);
	return 0;
}
#end if*/
