/*Write an algorithm/ program to print the prime numbers up to 100*/
#include <stdio.h>

int main() {
    int i, j;

    printf("Prime numbers up to 100 are:\n");

    for (i = 2; i <= 100; i++) {
        int isPrime = 1;  // Assume i is prime until proven otherwise

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // i is divisible by j, so it is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d is a Prime number\n", i);
        }
    }

    return 0;
}