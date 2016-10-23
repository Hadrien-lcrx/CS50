// Steven Kochan | Programming in C - Chapter 5 (Program Looping)
// Hadrien Lacroix - 5_1_triangular.c

// Calculate the eighth triangular number

#include <stdio.h>

int main (void)
{
  int triangularNumber;
  
  triangularNumber = 1 + 2 + 3 + 4  + 5 + 6 + 7 + 8;
  
  printf  ("The eighth triangular number is %i\n", triangularNumber);
  
  return 0;
}