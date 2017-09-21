// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex09_forToWhile_5_3.c

/*  Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements.
    Run each program to verify that both versions are identical. */

// Program to generate a table of triangular numbers


#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n     Sum from 1 to n\n");
    printf ("---    ---------------\n");
    
    triangularNumber = 0;
    n = 1;
    
    while (n <= 10)
    {

        triangularNumber += n;
    
    printf (" %2i           %2i\n", n, triangularNumber);
        ++n;
    }

    return 0;
}