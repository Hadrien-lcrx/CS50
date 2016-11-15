// Steven Kochan | Programming in C - Chapter 10 (Character Strings)
// Hadrien Lacroix - 10_05_scanStrings.c

// Program to illustrate the %s scanf format characters

#include <stdio.h>

int main (void)
{
    char s1[81], s2[81], s3[81];
    
    printf  ("Enter text:\n");
    
    scanf   ("%s%s%s", s1, s2, s3);
    
    printf  ("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
    
    return 0;
}