// day10
// LearningParameters

#include <stdio.h>

void stars(int n);			// Declaration of stars function with one parameter (n)

int main(void)
{
	int k=5;
	
	stars(k);
	stars(2*k);
	stars(20);
	
	return 0;
}

void stars(int n)
{
	int i;
	
	for(i=1 ; i<=n ; i++)
	{
		printf("* ");			// Print out n number of stars
	}
	printf("\n");
}
