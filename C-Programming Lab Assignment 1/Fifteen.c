/*Write a C program to find the sum of first 100 natural numbers using loop.*/
#include <stdio.h>
int sum = 0;
int main(){
for (int i = 0; i <= 100; i++){
    sum = sum + i;
}

printf("%d",sum);
return 0;
}