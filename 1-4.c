#include <stdio.h>
//Celsius -> Fahrenheit table with headings

int main(void)
{
	float fahr, celsius;
	float lower = 0, upper = 300, step = 20;
	
	printf("Celsius\tFahr\n");
	celsius = lower;

	while(celsius <= upper)
	{
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	
	return 0;
}
