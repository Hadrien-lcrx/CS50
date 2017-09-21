// Calculate the average of an array of 10 foating point values
// Hadrien - Filename: 7-ex4_arrayAverage.c

#include <stdio.h>

int main (void)
{
   float array[10], average = 0;
   int i;
   
   printf   ("Give me 10 floating point values:\n");
   
   for (i = 0; i < 10; i++) {
   scanf ("%f", &array[i]);
   average += array[i];
   }
 
    printf  ("Average = %f\n", average / 10);
    
    return 0;
}