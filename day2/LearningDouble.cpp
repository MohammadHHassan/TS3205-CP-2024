// day2
// LearningDouble

#include <stdio.h>			// Library for printf

int main(void)				// Main function
{
	double numberOne, numberTwo, numberThree;		// Declaring three variables as double
	
	numberOne = 3.19;
	numberTwo = 2.5;
	numberThree = numberOne+numberTwo;
	
	printf("numberOne = %.2f, numberTwo = %.2f", numberOne, numberTwo);
	printf("\nnumberThree = %.1f", numberThree);
	
	return 0;
}
