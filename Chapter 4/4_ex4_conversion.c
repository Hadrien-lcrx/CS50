// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 4_ex4_conversion.c

/*Write a program that converts 27° from degrees Fahrenheit (F) to degrees Celsius
  (C) using the following formula:
  C = (F - 32) / 1.8*/
  
#include <stdio.h>

int main (void)
{
    float C, F = 27;
    
    C = (F - 32) / 1.8;
    printf  ("%f°F is %f °C\n", F, C);
    
    return 0;
}