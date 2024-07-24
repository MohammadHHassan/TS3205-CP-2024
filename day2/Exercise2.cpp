// day2
// Exercise2

/* 	Copy and paste all the codes from BruneiDollarToRM.c
	Modify this program so that it accepts user's input for the BND value.
	(Note that: The conversion specifier scanf(" %lf", &.....) for double)
	Print out the result.
*/

#include <stdio.h>			// Header file for input/output

int main(void)				// Main function
{
	double bnd, rm;			// Declare bnd and rm as double
	
	printf("Please enter the BND value you want to convert: ");
	scanf(" %lf", &bnd);
	rm = bnd*3.47;			// Calculate the conversion to rm
	
	printf("BND to RM Converter:\n");			// Title of the application
	printf("BND %.2f = RM %.2f", bnd, rm);		// Print out the conversion
	
	return 0;
}
