// Program to generate the first 15 Fibonacci numbers
// Hadrien - Filename: 7-ex6_Fibonacci.c

#include <stdio.h>

int main (void)
{
    int Fibonnaci2, Fibonnaci1, Fibonnaci, i;
    Fibonnaci2 = 0;
    Fibonnaci1 = 1;
    Fibonnaci = Fibonnaci2 + Fibonnaci1;
    
    for (i = 2; i < 15; i++) {
        Fibonnaci = Fibonnaci2 + Fibonnaci1;
        Fibonnaci2 = Fibonnaci1;
        Fibonnaci1 = Fibonnaci;
        printf  ("%i ", Fibonnaci);
    }
    printf  ("\n");
    
    return 0;
}  