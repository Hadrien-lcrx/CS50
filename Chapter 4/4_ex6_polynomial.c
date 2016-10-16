// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 4_ex6_polynomial.c

/*Write a program to evaluate the polynomial shown here:
  3x^3 - 5x^2 + 6
  for x = 2.55.*/
  
#include <stdio.h>

int main (void)
{
    float result, x = 2.55;
    
    result = 3 * (x * x * x) - 5 * (x * x) + 6;
    printf  ("3x^3 - 5x^2 + 6 = %f\n", result);
    
    return 0;
}