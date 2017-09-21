// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex8_triangularAsk.c

/*  Program 5.5 allows the user to type in only five different numbers.
    Modify that program so that the user can type in the number of triangular numbers to be calculated. */
    

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter, ask;
    
    printf  ("How many triangular numbers do you want to calculate? ");
    scanf   ("%i", &ask);
    
    for ( counter = 1; counter <= ask; ++counter )
    {
        printf  ("What triangular number do you want ? ");
        scanf   ("%i", &number); 
    
        triangularNumber = 0;
        
        for (n = 1; n <= number; ++n)
        triangularNumber += n;
        
        printf ("Triangular number %i is %i\n", number, triangularNumber);
    }
    
    return 0;
}