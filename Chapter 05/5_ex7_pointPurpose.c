// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_ex7_pointPurpose.c

/*  A decimal point before the field width specification in a printf statement has a
    special purpose. Try to determine its purpose by typing in and running the following
    program. Experiment by typing in different values each time you are prompted. */

#include <stdio.h>

int main (void)
{
    int dollars, cents, count;
    
    for ( count = 1; count <= 10; ++count )
    {
        printf ("Enter dollars: ");
        scanf ("%i", &dollars);
        
        printf ("Enter cents: ");
        scanf ("%i", &cents);
        
        printf ("$%i.%.2i\n\n", dollars, cents);
    }
    
    return 0;
}

/*  ANSWER: The decimal point before the field width specification (%.2i)
    makes sure that the variable will display at least two digist:
    1 shows as 01, 8, shows as 08, etc. */