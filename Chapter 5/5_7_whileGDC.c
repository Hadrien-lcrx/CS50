// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_7_whileGDC.c

// Find the Greatest Common Divisor of 2 non-negative integer values

#include <stdio.h>

int main (void)
{
    int u, v, temp;
    
    printf("Please type in two non-negative integers. \n");
    scanf("%i%i", &u, &v);
    
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    printf("Their greatest common divisor is %i\n", u);
    
    return 0;
}