// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_6_while.c

// Program to introduce the while statement

#include <stdio.h>

int main (void)
{
    int count = 1;
    
    while (count <= 5)
    {
        printf("%i\n", count);
        ++count;
    }
    
    return 0;
}