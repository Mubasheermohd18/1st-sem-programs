#include <stdio.h>
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}


int digitalRoot(int num) {
    if (num < 10)
        return num; 
    return digitalRoot(sumOfDigits(num)); 
}

int main() {
    int num;
    printf("Enter a number to find its Digital Root: ");
    scanf("%d", &num);

    int result = digitalRoot(num);
    printf("The Digital Root of %d is: %d\n", num, result);

    return 0;
}

