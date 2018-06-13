#include<stdio.h> 
int  main() 
{ 
   unsigned int x = -1; 
   int y = ~0;
      printf("%u\n",x); 
	 
   if (y == x) 
      printf("same"); 
   else
      printf("not same"); 
   return 0; 
}
