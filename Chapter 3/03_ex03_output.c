// Steven Kochan | Programming in C - Chapter 3 (Compiling and Running Your First Program)
// Hadrien Lacroix - 03_ex03_output.c

// What output would you expect from the following program?

#include <stdio.h>

int main (void)
{
    printf ("Testing...");
    printf ("....1");
    printf ("...2");
    printf ("..3");
    printf ("\n");
    
    return 0;
}

/*  This program will display everything on the same line
    and then break line. The screen will show this:
    Testing.......1...2..3
    ~/workspace/ $ */