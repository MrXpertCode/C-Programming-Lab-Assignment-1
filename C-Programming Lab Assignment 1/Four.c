/*Write a C program to convert specified no of days into years, weeks and days.  (Note: Ignore leap year.)*/

#include <stdio.h>
int main(){

float days = 50;

float year = days / 365;
float weeks = days / 7;

printf("%.2f\n" , year);
printf("%.2f" , weeks);
    return 0;
}