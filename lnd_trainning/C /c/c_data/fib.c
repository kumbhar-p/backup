#include<stdio.h>
int fib(int ) ;
void main()
{
        int i,r,n;
        printf("Enter n \n");
        scanf("%d",&n);
        printf("Fibonacci series is :\n");
        for(i=1;i<=n;i++)
        {
	    r=fib(i);
	    printf("%5d",r);
        }
}
 
int fib(int x)
{
  int f;
  if (x==1)
     return(0);
   else if (x==2)
	   return(1);
	 else
	 f= fib(x-1)+fib(x-2);
  return(f);
}

