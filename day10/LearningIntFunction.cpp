// day10
// LearningIntFunction

#include <stdio.h>

int addTen(int a);			// Declaration of addTen function with int a parameter

int main(void)
{
	int x, y;
	
	x = 50;
	printf("x = %d\n", x);
	
	y = addTen(x);
	printf("y = %d\n", y);
	
	printf("5+10 = %d\n", addTen(5));
	printf("25+10 = %d", addTen(25));
	
	return 0;
}

int addTen(int a)
{
	return a+10;			// Return the value of a+10
}
