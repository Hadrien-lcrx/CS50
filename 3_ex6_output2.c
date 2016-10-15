// Steven Kochan | Programming in C - Chapter 3 (Compiling and Running Your First Program)
// Hadrien Lacroix - 3_ex6_output2.c

/*What output might you expect from the following program?

#include <stdio.h>

int main (void)
{
    int answer, result;
    
    answer = 100;
    result = answer - 10;
    
    printf ("The result is %i\n", result + 5);
    
    return 0;
}*/

/*  This program will display the printf function, replacing %i by 95 (100 - 10 + 5).
    and then break line. The screen will show this:
    The result is 95
    ~/workspace/ $ */