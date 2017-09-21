// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex09_forToWhile_5_4.c

/*  Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements.
    Run each program to verify that both versions are identical. */

// Asking the user for input


#include <stdio.h>

int main (void)
{
    int n = 1, number, triangularNumber = 0, counter = 1;

    while (counter <= 5)
    {
        triangularNumber += n;
        printf  ("What triangular number do you want? ");
        scanf   ("%i", &number);
        printf  ("Triangular number %i is %i\n\n", number, triangularNumber);
        
        ++counter;
    }

    return 0;
}