// Preprocessor Directives
#include <stdio.h> // input-output
#include <stdbool.h> // boolean
#include <stdlib.h> // standard libriary methods
#include <time.h> // time methods

int main() {

	printf("**********************************************\n");
	printf("Starting the Guessing Game\n");
	printf("--------------------------\n\n");

	srand(time(NULL));
	int randomNumber = rand();

	printf("%d\n", randomNumber);

	printf("**********************************************\n");


	return 0;
}
