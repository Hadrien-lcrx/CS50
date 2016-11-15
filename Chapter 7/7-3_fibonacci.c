// Program to generate the first 15 Fibonacci numbers
// Hadrien - Filename: 7-3_Fibonacci.c

#include <stdio.h>

int main (void)
{
    int Fibonnaci[15], i;
    
    Fibonnaci[0] = 0;   //by definition
    Fibonnaci[1] = 1;   //ditto
    
    for ( i = 2; i < 15; ++i )
        Fibonnaci[i] = Fibonnaci[i - 2] + Fibonnaci[i - 1];
        
    for ( i = 0; i < 15; ++i)
        printf  ("%i\n", Fibonnaci[i]);
        
    return 0;
}    