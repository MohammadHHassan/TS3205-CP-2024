// day2
// LearningScanf

#include <stdio.h>		// Header file for input (scanf) /output (printf)

int main(void)
{
	int age;			// Declare variable to store user's age
	
	printf("Hi Mohammad! :)\n");		// Greet user
	
	printf("How old are you? ");	// Prompt a message for the user to enter their age
	scanf(" %d", &age);			// Store user's input in variable age
	
	printf("\nYou are %d years old", age);		// Print back the user's age
	
	return 0;
}
