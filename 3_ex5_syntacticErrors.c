// Steven Kochan | Programming in C - Chapter 3 (Compiling and Running Your First Program)
// Hadrien Lacroix - 3_ex5_syntacticErrors.c

/*Identify the syntactic errors in the following program.Then type in and run the
corrected program to ensure you have correctly identified all the mistakes.*/

#include <stdio.h>

int main (void)
{
    int sum;
    
    // COMPUTE RESULT
    sum = 25 + 37 - 19;
    
    // DISPLAY RESULTS
    printf  ("The answer is %i\n", sum);
    
    return 0;
}