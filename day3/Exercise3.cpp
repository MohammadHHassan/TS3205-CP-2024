// day3
// Exercise3

/*	Declare variables area, base and height in double
	Print out a message "Area of triangle calculator"
	Prompt a message for the user to enter value of base
	Store this value in base variable
	Prompt another message for the user to enter value of height
	Store this value in height variable
	
	Calculate the area of triangle
	Print out the result in a user-friendly manner.
*/

#include <stdio.h>				// Header file for input/output

int main(void)					// Main function
{
	double area, base, height;
	
	printf("Area of triangle calculator\n\n");
	
	printf("Please enter the value of base: ");
	scanf(" %lf", &base);
	printf("Please enter the value of height: ");
	scanf(" %lf", &height);
	
	area = 0.5*base*height;
	printf("Area of triangle = %.2f", area);
	
	return 0;					// End of main function
}
