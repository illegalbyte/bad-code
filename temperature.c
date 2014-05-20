#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void celc();
void farh();

int main(int argc, char const *argv[])
{
	char unit;
	int repeater = 1;


	printf("\nStarting unit: (c) or (f) ➔  ");
	unit = getchar();
	printf("\n");


	if (unit == 'c' || unit == 'C')
	{
		celc();
	}
	else if (unit == 'f' || unit == 'F') 
	{
		farh();
	}
	else 
	{
		printf("Exiting...\n");
	}


	return 0;
}


void celc()
{
	int degrees = 0; 

	printf("Enter a temperature in CELCIUS: ");
	scanf("%d", &degrees, stdin);

	int frnht = degrees * 9/5 + 32;


	printf("\nYour temperature in Fahrenheit is: %d \n\n", frnht);

}

void farh()
{
	int degrees = 0; 

	printf("Enter a temperature in FAHRENHEIT: ");
	scanf("%d", &degrees, stdin);

	int clcs = (degrees - 32) * 5/9 ;


	printf("\nYour temperature in Celcius is: %d \n\n", clcs);

}


