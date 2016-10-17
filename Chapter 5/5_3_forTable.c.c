// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 5_3_forTable.c

// Program to generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;
    
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n      Sum from 1 to n\n");
    printf("---     ---------------\n");
    
    triangularNumber = 0;
    
    for (n = 1; n <= 10; ++n)
    {
        triangularNumber += n;
        printf(" %i      %i\n", n, triangularNumber);
    }
    
    return 0;
}