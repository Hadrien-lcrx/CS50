// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex6_justifiedTable.c

/*  A minus sign placed in front of a field width specification causes the field to be displayed left-justified.
    Substitute the following printf statement for the corresponding statement in Program 5.2,
    run the program, and compare the outputs produced by both programs.
    
    printf ("%-2i      %i\n", n, triangularNumber);
    
    NOTE: The exercise asks to use Program 5.2, but in the 3rd edition, it's actually 5.3 */

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
        printf ("%-2i      %i\n", n, triangularNumber);
    }
    
    return 0;
}