#include <STDIO.H>
#include <STDLIB.H>
#include <MATH.H>
#include <TIME.H>


int main(int argc, char const *argv[])
{
	srand(time(NULL)); // to seed the randomness with time

	int ctr, inner, outer, didSwap, temp;

	int nums[10]; // holds ten numbers

	// fills array with random numbers
	for (ctr = 0; ctr < 10; ctr++)
		{
			nums[ctr] = (rand() % 99) + 1;
		}

	// prints the list before it gets sorted
	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("%d: %d \n", ctr+1, nums[ctr] );
	}

	// Sort the array 😮
	for (outer = 0; outer < 9; outer++)
	{
		didSwap = 0; // changes to '1' if the array has been sorted

		for (inner = outer; inner < 10; inner++)
		{
			if (nums[inner] < nums[outer])
				{
					temp = nums[inner]; // a temp number for swapping the two
					nums[inner] = nums[outer];
					nums[outer] = temp;

					didSwap = 1; // to know that the array has been sorted
				}	
		}

		if (didSwap == 1)
		{
			continue;
		}
	}

	printf("Your Sorted Array:\n------------------\n");
	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("%d: %d \n", ctr+1, nums[ctr] );
	}

	printf("\n");
	return 0;
}