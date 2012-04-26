#include <stdio.h>
//Celsius -> Fahrenheit table with function definition

float celtofahr(int celsius)
{
	float fahr = (9.0/5.0) * celsius + 32;
	return fahr;
}

int main(void)
{
	float celsius;
	float lower = 0, upper = 300, step = 20;
	
	printf("Celsius\tFahr\n");
	celsius = lower;

	while(celsius <= upper)
	{
		printf("%3.0f %6.1f\n", celsius, celtofahr(celsius));
		celsius = celsius + step;
	}
	
	return 0;
}
