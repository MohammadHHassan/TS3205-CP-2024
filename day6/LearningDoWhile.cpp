// day6
// LearningDoWhile

#include <stdio.h>				// Library for input (scanf) & output (printf)

int main(void)					// Main function
{
	double x;					// Declare variable x as double
	
	do							// Do the following program
	{
		printf("\nPlease enter a negative number: ");	// Ask the user to enter negative number
		scanf(" %lf", &x);		// Store user's input in variable x
	}while(x>=0);				// Loop while the user entered positive number
	
	printf("\nYour number is %g", x);		// Print out user's negative number
	printf("\nThank you!");		// Print out "Thank you!"
	
	return 0;					// End of main function
}
