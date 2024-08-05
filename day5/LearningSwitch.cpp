// day5
// LearningSwitch

#include <stdio.h>

int main(void)
{
	char input;
	
	printf("Please enter 'A' or 'B': ");
	scanf(" %c", &input);
	
	switch(input)
	{
		case 'A':	printf("You typed 'A'");
					break;		// Exit the curly bracket
		
		case 'a':	printf("You typed 'a'");
					break;
					
		case 'B':						
		case 'b':	printf("You typed 'B' or 'b'");
					break;
					
		default:	printf("You didn't type 'A' or 'B'");
	}
	
	printf("\nThank you!");
	
	return 0;
}
