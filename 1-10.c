#include <stdio.h>
#include <stdbool.h>
//Replaces a tab by "\t", backspace by "\b" and each backslash by "\\"

int main(void)
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\t'){ printf("\\t"); }
		else if(c == '\b'){ printf("\\b"); }
		else if(c == '\\'){ printf("\\\\"); }
		else{ putchar(c); }
	}

	return 0;
}
