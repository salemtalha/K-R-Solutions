#include <stdio.h> 
//histogram for frequencies of characters

int main(void)
{
	int c;
	int wordcount = 0;
	int a[10] = { 0 };

	while((c = getchar()) != EOF)
	{
		if((c == '\t') || (c == '\n') || (c == ' '))
		{
			if(wordcount == 0){ continue; }
			else if(wordcount >= 10)
			{
				a[9] = a[9] + 1;
			}
			else{ ++a[wordcount-1]; }

			wordcount = 0;
		}

		else{ ++wordcount; }
	}

	printf("    number of occurrences\n");
	
	int max = 0;

	for(int i = 0; i < 10; i++)
	{
		if(a[i] > max){ max = a[i]; }
	}

	printf("    ");
	
	for(int j = 0; j < max; j++)
	{
		printf("-");
		
	}

	printf("\n");

	for(int k = 0; k < 10; k++)
	{
		if(k == 9){ printf("10+|"); }
		else{ printf("  %d|", k + 1); }
		for(int l = 0; l < a[k]; l++)
		{
			printf("*");
		
		}

		printf("\n");
	}
}
