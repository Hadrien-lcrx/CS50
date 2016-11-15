// Sieve of Erastosthenes Algorithm
// Hadrien - 7-ex7_sieveOfErastosthenes.c

#include <stdio.h>

int main (void)

{
    int P[30], i, j;
    
    for (i = 2; i <= 150; ++i)
    P[i] = 0;
    
    for (i = 2; i <= 150; ++i) {
        if (P[i] == 0)
        printf  ("%i ", i);
        
        for (j = 1; j * i <= 150; ++j)
        P[i*j] = 1;
    }
    
    printf  ("\n");
    
    return 0;
}