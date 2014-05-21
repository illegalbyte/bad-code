// +------------------------------+
// |                              |
// |  AUTHOR: Lewis Gentle        |
// |  Email: [REDACTED]			  |
// |  Phone: [REDACTED]           |
// |                              |
// +------------------------------+

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{

	// so the program generates a new random number each time (needs <time.h>) "seed"
	srand(time(NULL));

	char guessWord[][10] = 
	{
		"red",      //0
		"green",	//1
		"trousers",	//2
		"bionic",	//3
		"matte",	//4
		"vlcnr"		//5
	};

	// generates a random number between 0 - 5 - this is also the word that's been chosen
	int randomIndex = rand() % 6;

	// Number of lives left
	int numLives = 5;
	
	// Number of answers correct so far
	int numCorrect = 0;
	
	// for comparing whether you've gotten any correct
	int oldCorrect = 0;
	
	// finds the length of the word you're trying to guess
	int lengthOfWord = strlen(guessWord[randomIndex]);
	
	// telling which letter's they've guessed correct
	int letterGuess[10] = { 0,0,0,0,0,0,0,0,0,0 };
	
	// for quitting
	int quit = 0;
	
	// the user's guess
	char guess[16];

	// the actual letter a user guesses
	char letterGuessed;


	// printf("guessWord = %s\nrandomIndex = %d\nlengthOfWord = %d\n", 
	// 	guessWord[randomIndex],
	// 	randomIndex, 
	// 	lengthOfWord);


	// ~~~~~~~~~~~~~~~~~
	//  Game Loop Begin
	// ~~~~~~~~~~~~~~~~~

	while ( numCorrect < lengthOfWord)
	{

		printf("\n~~ NEW TURN ~~\n");

		// for printing words you've got so far
		printf("WORD: ");
		for (int i = 0; i < lengthOfWord; ++i)
		{
			if (letterGuess[i] == 1)
			{
				printf("%c", guessWord[randomIndex][i]);
			}
			else
			{
				printf("-");
			}
		}


		// prints the amount of numbers you've gotten correct so far
		printf("\nNumber correct so far: %d / %d\n", numCorrect, lengthOfWord);
		// prints how many lives you have left
		printf("Lives left: %d\n", numLives);
		// prompts you to guess a letter
		printf("Enter a guess letter: ");
		// stores the user input in the char *guess* 
		fgets(guess, 10, stdin);
		// prints a new line for readability
		printf("\n");

		// checks for the "quit" command
		if (strncmp(guess, "quit", 4) == 0)
		{
			quit = 1;
			break;
		}

		// prints the letter that the user entered above
		letterGuessed = guess[0];
		// printf("Letter Guessed: %c\n", letterGuessed );

		// for reducting lives - checks whether the user got their guess correct
		oldCorrect = numCorrect;

		// this loop runs until it has checked all of the words characters with the users input
		for (int i = 0; i < lengthOfWord; ++i)
		{
			// continues the loop to next char if the user has already entered this letter
			if (letterGuess[i] == 1)
			{
				continue;
			}

			// if they get it correct, give them a life!
			if (letterGuessed == guessWord[randomIndex][i])
			{
				letterGuess[i] = 1;
				numCorrect++;
			}
		}	
		

		// if you haven't got any more correct, 
		if (numCorrect == oldCorrect)
		{
			// take away 1 life
			numLives--;
			// print sorry message
			printf("Sorry, incorrect...\n");
		}
		else
		{
			// but if you got it right, print a correct message
			printf("Correct!\n");
		}

		// if your number of lives falls below zero,
		if (numLives < 0)
		{
			// print hurtful message
			printf("\nOh no. You're dead! 💀\n the word was %s\n", guessWord[randomIndex]);
			// then break out of the loop, ending the program
			break;
		}


	}
	// Game Loop finish



	if (quit == 1)
	{
		printf("the user quit early... Bye!\n");
	}

	if (numCorrect == lengthOfWord)
	{
		printf("You've won! ✌️\n");
	}


	return 0;

}