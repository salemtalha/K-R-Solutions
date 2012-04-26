#include <stdio.h>
//Verifying that getchar() != EOF is 0 or 1

int main(void)
{
	int c = (getchar() != EOF);
	
	printf("The value of getchar() != EOF is %d\n", c);

	return 0;
}
