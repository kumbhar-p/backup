#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main(void)
{
	float fahr;
	float celsius;
	float lower;
	float upper;
	float step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("\nFahrenheit-Celsius table\n\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
	return 0;
}
