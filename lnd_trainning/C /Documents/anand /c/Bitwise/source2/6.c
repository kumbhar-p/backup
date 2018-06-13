//arthmatic operations by using bitwise operators
#include"headers.h"
int arthmatic(void)
{
	int n1;
	int n2;
	int c;
	printf("enter number 1:");
    n1 = myatoi();
	printf("enter number 2 :");
    n2 = myatoi();
  	c = add(n1,n2);
	printf("addition: %d\n",c);
	c = sub(n1,n2);
	printf("sub: %d\n",c);
	c =	mul(n1,n2);
	printf("mul: %d\n",c);
	c =	div_num(n1,n2);
	printf("division: %d\n",c);
	return 0;
}

int  add(int a,int b)
{
	int s = 0;
	s = a ^ b;
	while( a & b){
		b = ((a & b) << 1);
		a = s;
		s = a ^ b;
	}
	return s;
}

int sub(int a,int b)
{
	int temp = 0;
	temp =(~b)+1;
	a = add(a,temp); 	
	return(a);
}

int mul(int a,int b)
{
    int out = 0;
    int flag1;
    int temp = a;
    if( (a == 0) && (b == 0))
        return 0;
    if((a<0) && (b > 0)){
        flag1 = 1;
        temp = -temp;
    }
    if((a > 0) && (b < 0)){
        flag1 = 1;
        b = -(b);
    }
    if((a<0) && (b <0)){
        temp = -temp;
        b = -b;
    }
    while(temp){
        out = out +add(b,0);
        temp --;
    }
    if(flag1 == 1)
        out = -out;

    return (out);

}

int div_num(int a,int b)
{
    int i = 0;
    int flag1;
    int flag2;
    int temp = a;
    if(b == 0) {
        printf("operation cannot perform:");
        return 0;
    } 
    if(temp < 0) {
        flag1 = 1;
        a = -(a);			
    }
    if (b < 0) {
        b = -b;
        flag2 = 1;
    }
    while( a >= b ) {
        a = sub(a,b);
        i++;
    }	
    if((flag1 == 1) && (flag2 != 1 ))
        return -i;
    if((flag1 == 1) && (flag2 == 1))
        return i;
    else
        return i;
}
