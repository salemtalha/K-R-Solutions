#include <stdio.h>
#include <stdbool.h>
//Replaces each string of blanks in input with one blank

int main(void)
{
	int c;
	bool in = false;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' && !in)
		{ 
			putchar(c);
			in = true; 
		}
		else if(c == ' ' && in){ ; }
		else
		{
			putchar(c);
			in = false;
		}
	}

	return 0;
}
