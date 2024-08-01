// day4
// LearningIf

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");
	scanf(" %d", &x);
	
	if(x<0)
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...");
		x = -x;			// New x = -(Old x)
	}
	
	printf("\nNumber entered: %d", x);
	
	return 0;
}

