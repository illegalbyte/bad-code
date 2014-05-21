#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int delay = 1;
	int	delay2 = 1;
	int dots;

	for (int i = 0; i < 1; ++i)
	{
		printf("\033[5;32;40m"); 
		printf(" STARTING WAR... \n");
		printf("\033[m"); 
		sleep(delay);
	}

	// this loop is for how many lines of loading you want (CORE LOOP)
	for (int i = 0; i < 10; ++i)
	{
		// for printing the opening bracket [x
		printf("[");
		
		// loop for printing dots . 
		// increasing by one after each of the CORE loop is done

		for (int sd = 0; sd < i; sd++)
		{
			printf(".");
			sleep(1);
		}

		// loop for printing spaces
		// decreasing by one after each loop of CORE

		for (int ss = 9; ss != i; ss--)
		{
			printf(" ");		}

		// for printing the closing bracket }		
		printf("]\n");
	}
	printf("LOADING COMPLETE.\a\n\n");

	printf("\033[1;37;41m"); 
	printf(" STARTED WAR. \n\n");
	printf("\033[m"); 


	return 0;
}