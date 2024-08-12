// day7
// Program2

/*	Prompt a message for the user to enter a value 3 times
	Store the user's input in x (double)
	Sum all the values together
	Give 1 second delay for each prompt
	
	Count the number of large values entered (if x>100)
	Calculate the average of the 3 values
	Print out: Sum, Large Values & Average
*/

#include <stdio.h>
#include <windows.h>

int main(void)
{
	int i, count=0;
	double x, sum=0, average;
	
	for(i=1 ; i<=3 ; i++)
	{
		printf("Please enter a value: ");
		scanf(" %lf", &x);
		
		sum = sum+x;
		
		if(x>100)
		{
			count++;			// Increment count if x>100
		}
		
		Sleep(1000);
	}
	
	average = sum/3;
	
	printf("\nSum = %.1f", sum);
	printf("\nLarge values count = %d", count);
	printf("\nAverage = %.1f", average);
	
	return 0;
}
