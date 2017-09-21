// Printing calculator

#include <stdio.h>

int main (void)

{
    float number, result, S;
    char operator, E;
    
    operator = 1;
    E = 0;
    
    printf  ("Use 'S' to set accumulator and 'E' to end program.\n");
    
    result = 0;
    
    while ( operator )
    {
        printf  ("Give me a number and an operator.\n");
        scanf   ("%f %c", &number, &operator);

        switch (operator)
        {
            case 'S':
                S = number;
                result = S;
                printf  ("              Set accumulator to %.2f\n", S);
                printf  ("= %.2f\n", S);
                break;
            case '+':
                result = result + number;
                printf  ("              Add %.2f\n", number);
                printf  ("= %.2f\n", result);
                break;
            case '-':
                result = result - number;
                printf  ("              Substract %.2f\n", number);
                printf  ("= %.2f\n", result);
                break;
            case '*':
                result = result * number;
                printf  ("              Multiply by %.2f\n", number);
                printf  ("= %.2f\n", result);
                break;
            case '/':
                if ( number == 0 )
                {
                    printf  ("Division by zero.\n");
                break;
                }    
                else
                {
                    result = result / number;
                    printf  ("              Divide by %.2f\n", number);
                    printf  ("= %.2f\n", result);
                break;
                }
                
            case 'E':
                operator = !operator;
                printf  ("              End of program.\n");
                printf  ("= %.2f\n", result);
                break;
            default:
                printf  ("Unknown operator.\n");
                break;
        }
    }
    
    return 0;
}