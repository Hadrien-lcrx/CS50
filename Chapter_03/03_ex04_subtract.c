// Steven Kochan | Programming in C - Chapter 3 (Compiling and Running Your First Program)
// Hadrien Lacroix - 03_ex04_subtract.c

/*Write a program that subtracts the value 15 from 87 and displays the result,
together with an appropriate message, at the terminal.*/

#include <stdio.h>

int main (void)

{
    int value1, value2, subtract;
    
    value1 = 15;
    value2 = 87;
    subtract = value2 - value1;
    
    printf  ("The subtraction of %i from %i is %i\n", value1, value2, subtract);
    
    return 0;
}