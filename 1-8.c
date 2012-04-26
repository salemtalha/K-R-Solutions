#include <stdio.h>
//Program to count blanks, tabs and newlines

int main(void)
{
	int c, bc = 0, tc = 0, nlc = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' '){ ++bc; }
		else if (c == '\t'){ ++tc; }
		else if (c == '\n'){ ++nlc; }
	}

	printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\n", bc, tc, nlc);

	return 0;
}
