// Table of n and n squared

#include <stdio.h>
// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex2_squaredTable.c

/*  Write a program to generate and display a table of n and n^2, for integer values of n
    ranging from 1 to 10. Be certain to print appropriate column headings. */


int main (void)
{
    int n, n_squared;
    
    printf("TABLE OF POWERS OF 10\n");
    printf(" n          n squared\n");
    printf("---------------------\n");
   
    for (n = 1; n <= 10; ++n)
    {
    n_squared = n * n;
    printf("%2i          %3i\n",n,  n_squared);
    }
    
    return 0;
}