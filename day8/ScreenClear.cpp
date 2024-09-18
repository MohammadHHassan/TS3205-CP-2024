// day8
// ScreenClear

#include <stdio.h>			// Header file for printf/scanf
#include <windows.h>		// Header file for delay
#include <stdlib.h>			// Header file for screen clear

int main(void)
{
	int i;
	
	for(i=10 ; i>=0 ; i--)
	{
		printf("This program will be terminated in %d second(s)", i);
		Sleep(1000);		// Delay for 1 second / 1000 millisecond
		system("cls");		// To clear the screen
	}
	
	printf("Bye!");
	
	return 0;
}
