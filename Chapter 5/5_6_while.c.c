// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 5_6_while.c

// Program to introduce the while statement

#include <stdio.h>

int main (void)
{
    int count = 1;
    
    while (count <= 5)
    {
        printf("%i\n", count);
        ++count;
    }
    
    return 0;
}