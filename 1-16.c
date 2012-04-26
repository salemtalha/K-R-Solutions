#include <stdio.h>
#define MAXLINE 1000
//Revised the main routine to keep arbitrary long length of biggest line in input

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while((len = getline(line, MAXLINE)) > 0)
	{
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0){ printf("Longest string was %d characters: %s\n", max, longest); }
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	
	for(i = 0; (c = getchar()) != EOF && c!= '\n'; ++i)
	{
		if(i < (lim -1))
		{
			s[i] = c; 
		}
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i = 0;

	while((to[i] = from[i]) != '\0'){ ++i; }
}
