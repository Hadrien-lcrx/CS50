// Demonstrating an array of counters with any number of responses
// Hadrien - Filename: 7-ex3_array.c

#include <stdio.h>

int main (void)
{
    int ratingCounters[11], i, response, resNum;
    
    printf  ("How many responses do you want to enter? ");
    scanf   ("%i", &resNum);
    
    for ( i = 1 ; i <= 10 ; i++)
        ratingCounters[i] = 0;
    
    printf  ("You can enter 999 at any time to indicate your last response has been entered.\n")  ;  
    printf  ("Enter your responses:\n");
    
    for (i = 1 ; i <= resNum ; i++) {
        scanf   ("%i", &response);
        
        if (response == 999)
            break;
        else if ( response < 1 || response > 10 )
            printf  ("Bad response: %i\n", response);
        else
            ++ratingCounters[response];
    }
    
    printf  ("\n\nRating   Number of responses\n");
    printf  ("------    --------------------\n");
    
    for (i = 1 ; i <= 10 ; ++i)
        printf  ("%4i%14i\n", i, ratingCounters[i]);
}