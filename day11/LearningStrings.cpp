// day11
// LearningStrings
// Strings = Collection of characters

#include <stdio.h>

int main(void)
{
	char name[100];
	
	printf("Please enter your full name: ");
	scanf(" %[^\n]s", &name);		// %s for string, stop reading when use press enter
	
	printf("Your name is %s", name);
	
	return 0;
}
