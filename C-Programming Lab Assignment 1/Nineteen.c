/*Write a program in C to make such a pattern of astrisk(*) below using loop.  
*
* *
* * *
* * * * 	up to n lines where n is an integers */

#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}