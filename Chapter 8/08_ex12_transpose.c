// Steven Kochan | Programming in C - Chapter 8 (Working with Functions)
// Hadrien Lacroix - 08_ex12_transpose.c

/*  A matrix M with i rows, j columns can be transposed into a matrix N having j rows
    and i columns by simply setting the value of Na,b equal to the value of Mb,a for all
    relevant values of a and b.
        
        a. Write a function transposeMatrix that takes as an argument a 4 x 5 matrix
        and a 5 x 4 matrix. Have the function transpose the 4 x 5 matrix and store
        the results in the 5 x 4 matrix.Also write a main routine to test the function.
       
        b. Using variable-length arrays, rewrite the transposeMatrix function developed
        in exercise 12a to take the number of rows and columns as arguments,
        and to transpose the matrix of the specified dimensions. */
    

#include <stdio.h>

void transpose (int M[][5], int N[][4])
{
    int i = 0, j = 0;
    
    for ( i = 0; i < 4; i++ )
    {
        for ( j = 0; j < 5; j++ )
        {
            N[j][i] = M[i][j];
        }
    }
}    

int main (void)
{
    int i, j;
    
    int M[4][5] =   { 
                        { 0,  1,  2,  3,  4 },
                        { 5,  6,  7,  8,  9 },
                        {10, 11, 12, 13, 14 },
                        {15, 16, 17, 18, 19 }
                    };
                    
    int N[5][4];
    
    transpose(M, N);
    
    i = 0;
    j = 0;
    
    for ( j = 0; j < 5; j++ )
    {
        for ( i = 0; i < 4; i++ )
        {
            printf  ("%i    ", N[j][i]);
        }
        
        printf  ("\n");
    }
    
    
    
    return 0;
}