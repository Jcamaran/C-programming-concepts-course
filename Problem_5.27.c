#include <stdio.h>
#include <math.h>


int isPrime(int number) {
    if (number <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    printf("Prime numbers between 1 and 10,000:\n");

 
    int countPrimes = 0;
    for (int i = 2; i <= 10000; i++) {
        if (isPrime(i)) {
            printf("%d is a prime number.\n", i);
            countPrimes++;
        }
    }

    printf("Total prime numbers found: %d\n", countPrimes);

    return 0;
}
