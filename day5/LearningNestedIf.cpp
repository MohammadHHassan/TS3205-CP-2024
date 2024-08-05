// day5
// LearningNestedIf

#include <stdio.h>

int main(void)
{
	int age;
	
	printf("Please enter your age: ");
	scanf(" %d", &age);
	
	if(age>=0)		// If the user's input is greater than or equal to 0
	{
		printf("Age entered is valid.\n");
		
		if(age<12)		// If age is less than 12
		{
			printf("Children.\n");
		}
		else if(age>=12 && age<18)		// If age is 12, 13, 14, 15, 16, 17
		{
			printf("Teenager.\n");
		}
		else if(age>=18 && age<60)		// If age is 18, 19, 20......., 59
		{
			printf("Adult.\n");
			
			if(age<=30)					// If age is 18, 19, 20......., 30
			{
				printf("Young Adult.\n");
			}
			else						// If age is 31, 32, 33......., 59
			{
				printf("Mature Adult.\n");
			}
		}
		else 							// If age is 60 and above
		{
			printf("Senior.\n");
		}
	}
	else			// If the user's input is not a positive number
	{
		printf("Age entered is invalid.\n");
	}
	
	printf("Thank you!");
	
	return 0;
}
