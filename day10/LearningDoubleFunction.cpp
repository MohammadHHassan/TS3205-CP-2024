// day10
// LearningDoubleFunction

#include <stdio.h>
#include <math.h>

double hypo(double a, double b);	// Declaration of hypo function with 2 parameters

int main(void)
{
	double base, height, hp;
	
	printf("This program calculates the hypotenuse value of a triangle.\n\n");
	
	printf("Please enter the base value: ");
	scanf(" %lf", &base);
	printf("Please enter the height value: ");
	scanf(" %lf", &height);
	
	hp = hypo(height, base);
	printf("\nHypotenuse = %.2f", hp);
	
	return 0;
}

double hypo(double a, double b)
{
	double c;
	
	c = sqrt(pow(a,2)+pow(b,2));
	return c;
}
