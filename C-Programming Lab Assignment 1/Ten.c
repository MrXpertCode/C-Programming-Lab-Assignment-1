/*Draw a flow chart and write a C program that accepts three integers as input  and find the largest of three. */

#include <stdio.h>
int main(){

int a , b , c;
printf("Enter three Integers: ");
scanf("%d, %d , %d", &a, &b, &c);

if (a > b && a >c){
    printf("%d is the largest given three integers" , a);
}

if (b > a && b>c){
    printf("%d is the largest given three integers" , b);
}

if (c > a && c>b){
    printf("%d is the largest of given three integers" , c);
}
    return 0;
}