#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
printf("\nwelcome to number guess game!!!!!!!!!!!!");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the right number.\n");
            printf("It took you %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
