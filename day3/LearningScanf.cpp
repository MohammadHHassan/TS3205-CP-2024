// day3
// LearningScanf

#include <stdio.h>			// Library for scanf (input) and printf (output)

int main(void)				// Main function
{
	int a, b, c;			// Declare variable a, b and c as integer
		
	printf("Please enter the value of a: ");		// Prompt a message for the user to enter value of a
	scanf(" %d", &a);		// Store the user's input in a
	
	printf("Please enter the value of b: ");		// Prompt a message for the user to enter value of b
	scanf(" %d", &b);		// Store the user's input in b
	
	c = a+b;				// Calculate the sum of a and b
	printf("c = a+b = %d", c);		// Print out the result
	
	return 0;
}
