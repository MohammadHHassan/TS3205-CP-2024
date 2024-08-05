// day5
// LearningIfElse3

#include <stdio.h>				// Library for printf & scanf

int main(void)					// Main function
{
	int age;					// Declare variable age as integer (whole number)
	
	printf("Please enter your age: ");		// Prompt a message for user to enter their age
	scanf(" %d", &age);			// Store user's input in variable age
	
	if(age>=18)			// If user's age is greater than or equal to 18
	{
		printf("You are eligible for a driver's license :)");
	}
	else
	{
		printf("You are NOT eligible for a driver's license :(");
	}
	
	printf("\nThank you!");
	
	return 0;
}
