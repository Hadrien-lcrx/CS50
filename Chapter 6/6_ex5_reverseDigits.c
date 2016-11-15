// Program to reverse the digits of a number

#include <stdio.h>

int main (void)

{
    int flag, number, right_digit;
    flag = 0;
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    if ( number < 0 )
        number = -number;
        flag = 1;
     
    do
    {
        right_digit = number % 10;
        printf  ("%i", right_digit);
        number = number / 10;
    }
        
        while (  number != 0 );
        
            if ( flag != 1 )
            printf  ("\n");
            
            else
            printf  ("-\n");
            
    return 0;
}