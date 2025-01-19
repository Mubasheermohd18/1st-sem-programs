#include <stdio.h>
#include <math.h>

int main() {
    double number;

    // Prompt for a positive number greater than 2
    do {
        printf("Please enter a positive number greater than 2: ");
        scanf("%lf", &number);
        if (number <= 2) {
            printf("The number must be greater than 2. Please try again.\n");
        }
    } while (number <= 2);

    int operation_count = 0;

    // Continue taking the square root until it is less than 2
    while (number >= 2) {
        operation_count++;
        printf("Operation %d: sqrt(%.2f) = %.2f\n", operation_count, number, sqrt(number));
        number = sqrt(number);
    }

    return 0;
}



