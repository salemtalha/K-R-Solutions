#include <stdio.h>
#define STRSIZE 82
//Prints all lines greater than 80 chars

int getline(char s[], int lim)
{
	int c, i;

	for(i = 0; (c = getchar()) != EOF && c!= '\n'; ++i)
	{
		if(i < lim - 1){ s[i] = c; }
	}
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	if(i >= 80){ printf("%s", s); }

	return i;
}


int main(void)
{
	int len;
	char line[STRSIZE];
	
	while((len = getline(line, STRSIZE)) > 0){ ;; }
	printf("\n");

	return 0;
}

