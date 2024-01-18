/*Write algorithm, flow-chart and program to compute the area and circumference of a circle with given 
radius r as input defining as constant (Note: Area pi-r-square)*/ 

#include <stdio.h>
int main(){

// Declaring radius as a constant //
const float radius = 5;

// Also declaring pi as a constant //
const float pi = 3.14;

// For, to find an area of a circle we have the following formula == 'pi * r * r'.
float Area = pi * radius * radius;

// For, to find circumference of a circle we have the following formula == '2 * pi * r'.
float Circumference = 2 * pi * radius;

//Printing the final result
printf("The area of a circle is %.2f\n" , Area);
printf("The circumference of a circle is %.2f" , Circumference);



    return 0;
}