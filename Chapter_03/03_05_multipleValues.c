// Steven Kochan | Programming in C - Chapter 3 (Compiling and Running Your First Program)
// Hadrien Lacroix - 03_05_multipleValues.c

// Displaying multiple values

#include <stdio.h>

int main (void)
{
    int value1, value2, sum;
    
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;
    printf  ("The sum of %i and %i is %i\n", value1, value2, sum);
    
    return 0;
}