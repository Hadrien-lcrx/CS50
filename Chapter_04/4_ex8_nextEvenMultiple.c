// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 4_ex8_nextEvenMultiple.c

/*To round off an integer i to the next largest even multiple of another integer j,
  the following formula can be used:
  Next_multiple = i + j - i % j

  For example, to round off 256 days to the next largest number of days evenly
  divisible by a week, values of i = 256 and j = 7 can be substituted into the preceding
  formula as follows:
  Next_multiple = 256 + 7 - 256 % 7
  = 256 + 7 - 4
  = 259

  Write a program to find the next largest even multiple for the following values of
  i and j:
  i         j
  365       7
  12,258    23
  996       4*/
  
#include <stdio.h>

int main (void)
{
    int i, j, Next_multiple;
    
    i = 365;
    j = 7;
    Next_multiple = i + j - i % j;
    printf  ("The next largest even multiple for %i and %i is %i\n", i, j, Next_multiple);
    
    i = 12258;
    j = 23;
    Next_multiple = i + j - i % j;
    printf  ("The next largest even multiple for %i and %i is %i\n", i, j, Next_multiple);
    
    i = 996;
    j = 4;
    Next_multiple = i + j - i % j;
    printf  ("The next largest even multiple for %i and %i is %i\n", i, j, Next_multiple);
    
    return 0;
}