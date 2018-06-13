// commandline  arthmatic operations
#include"headers.h"
int commandline(int n1, int n2,char n3)
{
   int a;
   if( n3 == '+' ){
         a = add( n1 , n2 );
         printf("add:%d\n",a);
       }
   if( n3 == '-' ){
         a = sub( n1 ,  n2 );
         printf("sub :%d\n",a);
       }
    if( n3 == '*' ){
         a = mul( n1 ,  n2 );
         	printf("mul:%d\n", a);
        }
    if( n3== '/' ){
         a = div_num( n1 , n2 ); 
			printf("div :%d\n",a);
	}
	return 0;
}
