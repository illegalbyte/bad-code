#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int beerMinus = 98;

	printf("\n");

	for (int beer = 99; beer > 0 ; beer--)
	{
		printf("%d bottles of beer on the wall, %d bottles of beer\nTake one down, turn it around, %d bottles of beer on the wall\n\n", beer, beer, beerMinus);

		beerMinus--;
		if (beerMinus < 0)
		{
			printf("\nNo more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n\n");
		}
	}

	return 0;
}