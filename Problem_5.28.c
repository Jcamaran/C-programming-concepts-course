#include <stdio.h>

int main() {
    int originalNumber;
    printf("Enter an integer: ");
    scanf("%d", &originalNumber);
    int reversedNumber = ReverseDigits(originalNumber);
    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}

int ReverseDigits(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return reversedNumber;
}
