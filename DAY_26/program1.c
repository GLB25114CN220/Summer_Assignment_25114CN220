// --> Write a program to Create number guessing game :--

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int difficulty)
{
    int secretNumber, guess, attempts = 0, maxAttempts;
    int minRange = 1, maxRange;

    // Set difficulty
    switch (difficulty)
    {
    case 1:
        maxRange = 50;
        maxAttempts = 10;
        printf("\n Easy Mode: Guess a number between 1 and 50 (Max %d attempts)\n", maxAttempts);
        break;
    case 2:
        maxRange = 100;
        maxAttempts = 7;
        printf("\n Medium Mode: Guess a number between 1 and 100 (Max %d attempts)\n", maxAttempts);
        break;
    case 3:
        maxRange = 500;
        maxAttempts = 5;
        printf("\n Hard Mode: Guess a number between 1 and 500 (Max %d attempts)\n", maxAttempts);
        break;
    default:
        printf("Invalid choice! Defaulting to Medium.\n");
        maxRange = 100;
        maxAttempts = 7;
    }

    // Generate random number
    srand(time(0));
    secretNumber = (rand() % maxRange) + minRange;

    printf("----------------------------------------\n");

    while (attempts < maxAttempts)
    {
        printf("\nAttempt %d/%d - Enter your guess: ", attempts + 1, maxAttempts);

        // Input validation
        if (scanf("%d", &guess) != 1)
        {
            printf(" Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ; // Clear input buffer
            continue;
        }

        attempts++;

        // Check bounds
        if (guess < minRange || guess > maxRange)
        {
            printf("  Please guess between %d and %d!\n", minRange, maxRange);
            attempts--; // Don't count invalid range guess
            continue;
        }

        // Check guess
        if (guess == secretNumber)
        {
            printf("\n CONGRATULATIONS! You guessed it right!\n");
            printf("The number was: %d\n", secretNumber);
            printf("You got it in %d attempt(s)!\n", attempts);

            // Performance rating
            if (attempts == 1)
                printf(" INCREDIBLE! First try!\n");
            else if (attempts <= maxAttempts / 2)
                printf(" Great job! Well done!\n");
            else
                printf(" Good job! You made it!\n");
            return;
        }
        else if (guess < secretNumber)
        {
            int diff = secretNumber - guess;
            printf(" Too LOW! ");
            if (diff > 50)
                printf("(Very far - go much higher!)\n");
            else if (diff > 20)
                printf("(Far - go higher!)\n");
            else if (diff > 10)
                printf("(Getting closer - a bit higher!)\n");
            else
                printf("(Very close - just a little higher!)\n");
        }
        else
        {
            int diff = guess - secretNumber;
            printf(" Too HIGH! ");
            if (diff > 50)
                printf("(Very far - go much lower!)\n");
            else if (diff > 20)
                printf("(Far - go lower!)\n");
            else if (diff > 10)
                printf("(Getting closer - a bit lower!)\n");
            else
                printf("(Very close - just a little lower!)\n");
        }

        // Remaining attempts warning
        int remaining = maxAttempts - attempts;
        if (remaining == 1)
            printf("  WARNING: Last attempt remaining!\n");
        else if (remaining <= 3)
            printf("  Only %d attempts left!\n", remaining);
    }

    // Game over
    printf("\n GAME OVER! You've used all your attempts.\n");
    printf("The secret number was: %d\n", secretNumber);
}

int main()
{
    int choice, difficulty, playAgain;

    printf("========================================\n");
    printf("       ** NUMBER GUESSING GAME **       \n");
    printf("========================================\n");

    do
    {
        // Difficulty selection
        printf("\nSelect Difficulty:\n");
        printf("  1.  Easy   (1-50,  10 attempts)\n");
        printf("  2.  Medium (1-100,  7 attempts)\n");
        printf("  3.  Hard   (1-500,  5 attempts)\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &difficulty);

        // Play the game
        playGame(difficulty);

        // Play again?
        printf("\n----------------------------------------\n");
        printf("Play again? (1 = Yes / 0 = No): ");
        scanf("%d", &playAgain);

    } while (playAgain == 1);

    printf("\nThanks for playing! Goodbye! \n");
    printf("========================================\n");

    return 0;
}