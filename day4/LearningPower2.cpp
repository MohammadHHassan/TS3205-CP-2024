// day4
// LearningPower2

#include <stdio.h>			// Library for input/output
#include <math.h>			// Library for math functions

int main(void)				// Main function
{
	const double pi = 3.141592654;		// Declare constant variable pi
	double A, r, h;			// Declare variables A, r and h as double
	
	r = 5.0;
	h = 8.0;
	
	printf("Given r=%.1f and h=%.1f\n", r, h);
	
	A = pi*r*(r+sqrt(pow(h,2)+pow(r,2)));
	
	printf("Area of cone = %.2f", A);
	
	return 0;				// End of main function
}
