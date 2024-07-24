// day2
// BruneiDollarToRM

#include <stdio.h>			// Header file for input/output

int main(void)				// Main function
{
	double bnd, rm;			// Declare bnd and rm as double
	bnd = 550;
	rm = bnd*3.47;			// Calculate the conversion to rm
	
	printf("BND to RM Converter:\n");			// Title of the application
	printf("BND %.2f = RM %.2f", bnd, rm);		// Print out the conversion
	
	return 0;
}
