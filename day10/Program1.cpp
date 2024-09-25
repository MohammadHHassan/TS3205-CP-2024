// day10
// Program1

#include <stdio.h>

void yourName(int a);

int main(void)
{
	int x;
	
	printf("How many times do you want your name to be printed?\n");
	scanf(" %d", &x);
	
	yourName(x);
	
	return 0;
}

void yourName(int a)
{
	int i;
	
	for(i=1 ; i<=a ; i++)
	{
		printf("%d. Haji Mohammad bin Haji Hassan\n", i);
	}
}
