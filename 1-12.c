#include <stdio.h>
#include <stdbool.h>
//Prints input one word per line

int main(void)
{
	int c;
	bool done = false;

	while((c = getchar()) != EOF)
	{
		if((c == ' ' || c == '\t') && !done)
		{
			done = true;
			putchar('\n'); 
		}
		else if((c == ' ' || c == '\t') && done){ ; }
		else if(c == '\n'){ ; }
		else
		{	
			putchar(c); 
			done = false;
		}
	}
	putchar('\n');
	return 0;
}
