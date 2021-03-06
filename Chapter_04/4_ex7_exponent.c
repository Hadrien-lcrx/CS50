// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 4_ex7_exponent.c

/*Write a program that evaluates the following expression and displays the results
  (remember to use exponential format to display the result):
  (3.31 x 10^-8 x 2.01 x 10^-7) / (7.16 x 10^-6 + 2.01 x 10^-8) */
  
#include <stdio.h>

int main (void)
{
    float result;
    
    result = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);
    printf  ("result = %e\n", result);
    
    return 0;
}