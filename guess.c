
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = rand() % 100 + 1;

    printf("=== NUMBER GUESSING GAME ===\n");
    printf("Guess a number between 1 and 100!\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret)
            printf("Too low! Guess higher.\n");
        else if (guess > secret)
            printf("Too high! Guess lower.\n");
        else
            printf("Correct! You won in %d attempts!\n", attempts);

    } while (guess != secret);

    return 0;
}
