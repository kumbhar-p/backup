#include<stdio.h>

int main(void)
{
	float lower = 0;
	float upper = 300;
	float step = 20;
	float fahr;
	float celsius = lower;
 
	printf("\n----fahrenheit to celsius-----\n");

	while(celsius<=upper)
	{
		printf("%3.0f %6.1f\n",celsius,((celsius*9)/5+32));
		celsius=celsius+step;
	}

	return 0;
}
		
	
