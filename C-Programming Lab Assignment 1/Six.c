/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. */
#include <stdio.h>
int main(){

int numInSeconds = 5000;

float hour = (float) numInSeconds / 60 / 60;
printf("%.2f\n" , hour);

float minutes = (float) numInSeconds / 60;
printf("%.2f" , minutes);
    return 0;
}