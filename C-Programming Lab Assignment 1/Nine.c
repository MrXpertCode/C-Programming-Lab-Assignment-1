/*Write a C program to check a given integer is positive even, negative even, positive odd or negative odd. */

#include <stdio.h>
int main(){

int num;
printf("Enter a number: ");
scanf("%d" , &num);


if (num>0 && num%2==0){
    printf("The given number is Postive even");
}
else if (num < 0 && num%2==0){
    printf("The given number is Negative even");
}
else if (num>0 && num%2 != 0){
    printf("The given number is Positive odd");
}
else if (num<0 && num%2 != 0){
    printf("The given number is Negative odd");
}

    return 0;
}