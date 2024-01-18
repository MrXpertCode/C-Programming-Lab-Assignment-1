/*Write an algorithm and C program that accepts two integers from the user as input and calculates the sum,
difference, product, quotient and remainder applying different arithmetic operators between two integers. */

#include <stdio.h>
int main(){

int num1 , num2;
printf("Enter a number:");
scanf("%d" , &num1);

printf("Enter another number:");
scanf("%d" , &num2);

//Sum
int sum = num1 + num2;

//Difference
int diff = num1 - num2;

//Product
int pro = num1 * num2;

//Quotient
int quo = num1 / num2;

//Remainder
int rem = num1 % num2;




    return 0;
}