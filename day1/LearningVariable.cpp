// day1
// LearningVariable

#include <stdio.h>

int main(void)
{
	// Variable is a place where you store data
	// Types of variable: int, double/float, char, boolean
	
	int a, b, c;			// Declaring variables a, b and c as integers
	
	a = 100;
	b = 255;
	c = a+b;
	
	printf("a = %d", a);	// Print out the value of a
	printf("\nb = %d", b);	// Print out the value of b
	printf("\nc = %d+%d = %d", a, b, c);
	
	return 0;
}
