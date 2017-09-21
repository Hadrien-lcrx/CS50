// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex4_factorialTable.c

/*  The factorial of an integer n, written n!, is the product of the consecutive integers 1 through n.
    For example, 5 factorial is calculated as
    5! = 5 x 4 x 3 x 2 x 1 = 120
    Write a program to generate and print a table of the first 10 factorials. */


#include <stdio.h>

int main (void)

{
    int n = 1, n_fac = 1;
    
    printf("Table of the first 10 factorials\n");
    printf("--------------------------------\n");
    printf(" n                   n factorial\n");
    
    while (n < 10)
    {
        printf("%2i                   %9i\n", n, n_fac);
        ++n;
        n_fac = n_fac * n;
    }
    
    return 0;
}