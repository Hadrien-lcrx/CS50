// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex09_forToWhile_5_5.c

/*  Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by equivalent while statements.
    Run each program to verify that both versions are identical. */
    
// Using nested while loops


#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter;
    
    counter = 1;
    
    while (counter <= 5)
    {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);
        
        triangularNumber = 0;
        n = 1;
        
        while (n <= number)
        {
            triangularNumber += n;
            ++n;
        }
        
        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
        ++counter;
    }

    return 0;
}