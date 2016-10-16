// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 4_ex5_output.c

/*What output would you expect from the following program?

#include <stdio.h>

int main (void)
{
    char c, d;
    
    c = 'd';
    d = c;
    printf ("d = %c\n", d);
    
    return 0;
}*/

/*  This program will assign the char value d to c, and then the value of c to d.
    The screen will show this:
    d = d
    ~/workspace/ $ */