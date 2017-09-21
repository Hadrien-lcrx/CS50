// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_11_sumInt.c

// Program that calculates the sum of the digits of an integer


#include <stdio.h>

int main (void)
{
    int number, right_digit, sum;
    
    printf("Enter an integer: ");
    scanf("%i", &number);
    
    sum = 0;
    
    do
    {
        right_digit = number % 10;
        sum += right_digit;
        number = number / 10;
    }
        while (number != 0);
    
    printf("The sum of the digits of %i is %i\n", number, sum);
    
    return 0;
}