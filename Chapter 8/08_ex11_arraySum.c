// Steven Kochan | Programming in C - Chapter 8 (Working with Functions)
// Hadrien Lacroix - 08_ex11_arraySum.c

/*  Write a function called arraySum that takes two arguments: an integer array and
    the number of elements in the array. Have the function return as is result the sum
    of the elements in the array. */
    

#include <stdio.h>

// Calculate sum of numbers in array

float arraySum (int array[counter])

{
    int i, sum = 0;
    
    for ( i = 1; i <= counter; ++i)
        sum += array[i];
        
        return sum;
}


// Prompt user for numbers

int main (void)
{   
    int i, counter;
    
    printf  ("How many numbers do you want to enter?");
    scanf   ("%i", &counter);
    
    printf  ("Give me %i floating point values:\n", counter);
    
    for (i = 0; i < counter; i++)
    {
        scanf ("%f", &arraySum[i]);
    }
    
    printf  ("Sum = %f", arraySum[i]);
}