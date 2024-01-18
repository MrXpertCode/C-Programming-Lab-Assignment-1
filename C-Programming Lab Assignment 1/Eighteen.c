// Factorial of an integer N:

// 1. Using for loop:

#include <stdio.h>

int main() {
    int N, i, fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", N, fact);

    return 0;
}

// 2. Using do while loop:


#include <stdio.h>

int main() {
    int N, i = 1, fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &N);

    do {
        fact *= i;
        i++;
    } while (i <= N);

    printf("Factorial of %d = %d\n", N, fact);

    return 0;
}

// 3. Using while loop:

#include <stdio.h>

int main() {
    int N, i = 1, fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &N);

    while (i <= N) {
        fact *= i;
        i++;
    }

    printf("Factorial of %d = %d\n", N, fact);

    return 0;
}

// Computation of a raised to power b:

// 1. Using for loop:

#include <stdio.h>

int main() {
    int a, b, i, result = 1;

    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    for (i = 1; i <= b; i++) {
        result *= a;
    }

    printf("%d raised to power %d = %d\n", a, b, result);

    return 0;
}

// 2. Using do while loop:

#include <stdio.h>

int main() {
    int a, b, i = 1, result = 1;

    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    do {
        result *= a;
        i++;
    } while (i <= b);

    printf("%d raised to power %d = %d\n", a, b, result);

    return 0;
}

// 3. Using while loop:

#include <stdio.h>

int main() {
    int a, b, i = 1, result = 1;

    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    while (i <= b) {
        result *= a;
        i++;
    }

    printf("%d raised to power %d = %d\n", a, b, result);

    return 0;
}