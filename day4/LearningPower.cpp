// day4
// LearningPower

#include <stdio.h>			// Library for printf and scanf
#include <math.h>			// Library for mathematical functions

int main(void)
{
	double a, b, c;			// Declare variables a, b and c as double
	
	a = 3.0;
	b = 10.0;
	
	c = pow(a,b);			// Calculate 2 to the power of 5 and store in c
	
	printf("3 to the power of 10 = %g", c);		// Print out the result
	
	printf("\n2 to the power of 4 = %g", pow(2,4));
	
	return 0;
}
