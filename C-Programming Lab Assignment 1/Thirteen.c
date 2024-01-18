/*Write a program to determine whether a given number is Armstrong number or not.*/
#include <stdio.h>

int main() {
    int n, temp, sum = 0, originalN;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Store the original value of n
    originalN = n;

    while (n > 0) {
        temp = n % 10;
        sum += temp * temp * temp;
        n /= 10;
    }

    if (sum == originalN) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}
