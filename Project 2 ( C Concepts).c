#include <stdio.h>
#include <stdbool.h>

int main() { 
    int j = 1000;
    bool theprime[j];


    for(int i = 0; i < j; i++) {
        theprime[i] = true;
    }

    theprime[0] = theprime[1] = false;

    for (int a = 2; a * a <= j; a++) {
        if(theprime[a ]){
            for (int i = a * a;  i < j; i += a) {
                theprime[i] = false;
            }
        }
    }

    printf("These are the Prime numbers between 1 and 999 using Sieve of Eratosthenes Program :\n");
    for(int i =2; i < j; i++) {
        if (theprime[i]) {
            printf("%d\n", i);
        }
    }
    printf("Thank you!");

    return 0;

}


