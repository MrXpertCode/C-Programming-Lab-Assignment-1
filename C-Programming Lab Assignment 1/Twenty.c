/* Write a program using loop to print the following floyd's triangle as given below when input is n.
1 
2 3
4 5 6
7 8 9 10
11 12 13 14     up to n rows*/
#include <stdio.h>

int main() {
    int num;
     
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &num);

    int number = 1; 

    for (int i = 1; i <= num; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
       
        printf("\n");
    }

    return 0;
}