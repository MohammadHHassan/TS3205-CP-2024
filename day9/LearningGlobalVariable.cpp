// day9
// LearningGlobalVariable

#include <stdio.h>

void printText();

double money=2.50;		// Global variable

int main(void)
{
	// double money=1.00;		// Local variable
	
	printf("Main: I have $%.2f in my pocket.\n", money);
	printText();
	
	return 0;
}

void printText()
{
	// double money=2.00;		// Local variable
	
	printf("printText: I have $%.2f in my pocket.\n", money);
}

