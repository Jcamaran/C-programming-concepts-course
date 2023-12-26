#include <stdio.h>

int isPerfect(int number) {
    int sum = 1; 
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            sum += i;
            if (i != number / i) {
                sum += number / i;
            }
        }
    }
    return sum == number;
}
int main() {
    printf("Perfect numbers between 1 and 1000:\n");

    for (int i = 2; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d is a perfect number. Factors: 1", i);
            
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
