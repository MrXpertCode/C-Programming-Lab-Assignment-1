/*Write a C program that accepts principle, rate of interest, time in years and computes the simple interest. */

#include <stdio.h>
int main(){

float principle;
float rateOfInterest;
float timeInYears;

printf("Enter principle: ");
scanf("%f" , &principle);

printf("Enter rate of interest: ");
scanf("%f" , &rateOfInterest);

printf("Enter time in years: ");
scanf("%f" , &timeInYears);

float simpleInterest = (principle * rateOfInterest * timeInYears ) / 100;

printf("Simple Interest is -->%.2f" , simpleInterest);




    return 0;
}