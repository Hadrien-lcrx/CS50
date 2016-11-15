// Generate Fibonacci numbers using variable length arrays
// Hadrien - Filename: 7-8_fibonacciLength.c

#include <stdio.h>

int main (void)

{
    int i, numFibs;
    
    printf  ("How many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf   ("%i", &numFibs);
    
    if (numFibs < 1 || numFibs > 75) {
        printf  ("Bad number, sorry!\n");
        return 1;
    }
    
    unsigned long long int  Fibonnaci[numFibs];
    
    Fibonnaci[0] = 0;       // by definition
    Fibonnaci[1] = 1;       // ditto
    
    for ( i = 2; i < numFibs; i++)
        Fibonnaci[i] = Fibonnaci[i-2] + Fibonnaci[i-1];
        
    for (i = 0; i < numFibs; ++i)
    printf  ("%llu ", Fibonnaci[i]);
    
    printf  ("\n");
    
    return 0;
        
}