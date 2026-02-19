
/**
 * Hey! I am creating a guessing game to test out reading in user input,
 * variables, conditionals, etc. 
 *
 * This serves as a basic example of how C programming works! 
 *
 * A user will guess a number from 1 through 5, and if that number matches
 * the random number generated, they win! 
 */

// Preprocessor Directives
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL)); // random num generator
	unsigned int maxValue = 5;
	unsigned int input;
	unsigned int randomNumber = rand() % maxValue + 1;

	printf("**********************************************\n");
	printf("Starting the Guessing Game\n");
	printf("--------------------------\n\n");

	/**
	 * Read user input.
	 */
	printf("Guess a number from 1 - %d: \n", maxValue);
	scanf("%d", &input);

	/**
	 * If a user has entered a number equal to the random number, they win!
	 * Otherwise, they lose. 
	 */
	if (input == randomNumber) {
		printf("\nYou win!! Congratulations!\n\n");
	} else {
		printf("You lose...\n\n");
	}

	printf("Game Ending...\n");
	printf("Disconnecting...\n");
	printf("**********************************************\n");


	return 0;
}
