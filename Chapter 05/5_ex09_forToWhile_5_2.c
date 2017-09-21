// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex09_forToWhile_5_2.c

/*  Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements.
    Run each program to verify that both versions are identical. */

/* Program to calculate the 200th triangular number
Introduction of the while statement */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;
   
    triangularNumber = 0;
    n = 1;
   
    while (n <= 200)
    {
    triangularNumber = triangularNumber + n;
    ++n;
    }
    
    printf ("The 200th triangular number is %i\n", triangularNumber);
    
    return 0;
}