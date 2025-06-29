#include <stdio.h>
#include <stdlib.h> // for rand(), srand()
#include <time.h>   // for time()
#include <stdbool.h>

void clearInputBuffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

int main()
{
    int secret, guess, attempts = 0;
    bool runAgain = true;
    char ans;

    do
    {

        // Seed the random no. generator with current time
        srand(time(NULL));

        // Generate a Random number form 1 to 100
        secret = rand() % 100 + 1;

        // printf("~\\ 🎲 Welcome to the Number Guessing Game! /~\n");
        printf("\n========\\ 🎲 Welcome to the Number Guessing Game! /========\n");
        printf("I have picked a number between 1 and 100. Try to guess it!\n");

        do
        {
            printf("Enter your best guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < secret)
            {
                printf("Too low! Try again.\n");
            }
            else if (guess > secret)
            {
                printf("Too high! Try again.\n");
            }
            else
            {
                printf("🎉 That's Correct! You guessed it in %d attempts.\n", attempts);
            }

        } while (guess != secret);

        printf("=====================================================");
        do
        {
            clearInputBuffer();
            printf("\nWould like to convert again? (y/n): ");
            // clearInputBuffer();
            int isChar = scanf("%c", &ans);
            // clearInputBuffer();
            if (isChar == 1 && ans == 'y')
            {
                // runAgain = true;
                break;
            }
            else if (isChar == 1 && ans == 'n')
            {
                runAgain = false;
                break;
            }
            else
            {
                printf("Invalid input. Please enter 'y' or 'n'.\n");
            }
        } while (1); // can't do 0, that would mean false

    } while (runAgain);

    return 0;
}
