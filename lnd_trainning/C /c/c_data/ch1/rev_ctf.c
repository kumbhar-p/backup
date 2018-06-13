#include<stdio.h>
int main()
{
	float lower=300,upper=0,step=20,fahr,celsius=lower;
	printf("\n----fahrenheit to celsius-----\n");
	while(celsius>=upper)
	{
		printf("%3.0f %6.1f\n",celsius,((celsius*9.0)/5.0+32));
		celsius=celsius-step;
	}
}
		
	
