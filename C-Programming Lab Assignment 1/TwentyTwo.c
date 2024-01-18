/*Write a program in C to make such a pattern like a pyramid with an asterisk.  
   * 
  * * 
 * * * 
* * * *   ::*/

#include <stdio.h>

int main() {
    int rows, space, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}