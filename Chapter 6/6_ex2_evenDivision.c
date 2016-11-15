// Program that evaluates if a is evenly divisible by b

#include <stdio.h>

int main (void)

{
    int a, b;
    
    printf  ("Please give me two integers. ");
    scanf   ("%i %i", &a, &b);
    
    if ( a % b == 0)
        printf  ("%i is evenly divisible by %i.\n", a, b);
    else
        printf  ("%i is not evenly divisble by %i.\n", a, b);
        
    return 0;
}