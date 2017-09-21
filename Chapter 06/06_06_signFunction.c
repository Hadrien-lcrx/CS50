// Steven Kochan | Programming in C - Chapter 6 (Making Decisions)
// Hadrien Lacroix - 06_06_signFunction.c

// Program to implement the sign function


#include <stdio.h>

int main (void)
{
    int number, sign;
    
    printf  ("Please type your number. ");
    scanf   ("%i", &number);
    
    if ( number == 0 )
        sign = 0;
    else if ( number < 0 )
        sign = -1;
    else                    // Must be positive
        sign = +1;
        
    printf  ("Sign = %i\n", sign);
    
    return 0;
}