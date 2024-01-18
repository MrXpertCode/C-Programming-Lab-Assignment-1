/*Write a program  that takes input of two numbers and an operator in(+,-,*,/ ) as input and pass 
those numbers and an operator to the function. The function should calculate the result of two numbers 
as indicated by operator and return the result. Display the result of computation in your program.*/

#include <stdio.h>

int myFunction(int num1 , int num2 , char operator){
    switch(operator){
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0){
                return num1 / num2;
            }
            else{
                printf("Error: division by zero\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }

}

int main(){
float num1 , num2 , result;
char operator;

// Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = myFunction(num1 , num2 , operator);
    printf("Result: %.0f %c %.0f = %.0f\n", num1, operator, num2, result);

    return 0;
}