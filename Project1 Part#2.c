#include <stdio.h>

int main() {
    printf(" All multiples of 8, < 10000:");

    for (int j = 8; j < 10000; j += 8) { 
        printf("%d\n", j);
    }
    printf(" ^ There you go ^");

    return 0;

}