//If the weather is between 18 and 30 degrees C, you will walk your dog. If the weather is below 18 degrees, it is too cold. If it is above 30 degrees, it will be too hot.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int temp = 0;

	printf("What is the temperature (c°) outside? ");
	scanf("%d", &temp);

	if (temp > 30)
	{
		printf("\nYou shouldn't take your dog for a walk today, %d° is too hot!\n\n", temp);
	}
	else if (temp < 18)
	{
		printf("\nYou shouldn't take your dog for a walk today, %d° is too cold!\n\n", temp);
	}
	else
	{
		printf("\nIt's good weather for a walk, enjoy! 🐶\n\n");
	}

	return 0;
}