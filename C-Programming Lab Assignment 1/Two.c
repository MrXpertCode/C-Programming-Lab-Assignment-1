/*Write a C program to display size in bytes of different data types using sizeof() operator.*/

#include <stdio.h>
int main(){

// Intializing variable
int myInt = 5;
float myFlaot = 1.23;
char myChar = 'A';
double myDouble = 1.234;
char myString[] = "This is a String";

//Printing Size of different data types.
printf("%lu\n" , sizeof(myInt));
printf("%lu\n" , sizeof(myFlaot));
printf("%lu\n" , sizeof(myChar));
printf("%lu\n" , sizeof(myDouble));

printf("%lu" , sizeof(myString)); // Every character is counted of 1 byte, hence 17 bytes ; Even spaces too.



// Results of sizeof() function are in Bytes.
    return 0;
}