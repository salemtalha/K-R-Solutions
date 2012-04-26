#include <stdio.h> 
//histogram for frequencies of characters

int main(void)
{
	int c;
	int a[26] = { 0 };

	while((c = getchar()) != EOF)
	{
		if((c >= 97) && (c <= 122)){ ++a[c-97]; }
		else if((c >= 65) && (c <= 90)){ ++a[c-65]; }
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

	for(int k = 0; k < 26; k++)
	{
		printf("  %c|", k+97); 
		for(int l = 0; l < a[k]; l++)
		{
			printf("*");
		
		}

		printf("\n");
	}
}
