// day7
// LearningDelay

#include <stdio.h>			// Library for printf
#include <windows.h>		// Library for delay

int main(void)
{
	int j;
	
	for(j=1 ; j<=10 ; j++)
	{
		printf("%d. Haji Mohammad bin Haji Hassan\n", j);
		Sleep(1000);			// Delay for 1000ms / 1s
	}
	
	return 0;
}
