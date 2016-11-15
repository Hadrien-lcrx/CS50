// Program that evaluates a divided by b

#include <stdio.h>

int main (void)

{
    float a, b;
    
    printf  ("Please give me two integers. ");
    scanf   ("%f %f", &a, &b);
    
    if ( b != 0 )
        printf  ("%f / %f = %.3f\n", a, b, a / b);
    else
        printf  ("Division by 0.\n");
        
    return 0;
}