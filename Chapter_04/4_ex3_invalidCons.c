// Steven Kochan | Programming in C - Chapter 4 (Variables, Data Types, and Arithmetic Expressions)
// Hadrien Lacroix - 4_ex3_invalidCons.c

/*Which of the following are invalid constants? Why?
    123.456     0x10.5      0X0G1
    0001        0xFFFF      123L
    0Xab05      0L          -597.25
    123.5e2     .0001       +12
    98.6F       98.7U       17777s
    0996        -12E-12     07777
    1234uL      1.2Fe-7     15,000
    1.234L      197u        100U
    0XABCDEFL   0xabcu      +123 */
    
/*  Reminder:
    - In C, an integer constant consists of a sequence of one or more digits.
    - A minus sign preceding the sequence indicates that the value is negative.
    - No embedded spaces are permitted between the digits
    - Values larger than 999 cannot be expressed using commas
    - If the first digit of the integer value is a 0, the integer is taken as
      expressed in octal (base 8) notation
        - the remaining digits of the value must be valid base-8 digits and, therefore, must be 0–7
        - example: the octal constant 0177 represents the decimal value 127 (1 × 64 + 7 × 8 + 7)
    - If an integer constant is preceded by a zero and the letter x (either lowercase or
      uppercase), the value is taken as being expressed in hexadecimal (base 16) notation
        - immediately following the letter x are the digits of the hexadecimal value, which can be
          composed of the digits 0–9 and the letters a–f (or A–F)
        - the letters represent the values 10–15, respectively
        - example: rgbColor = 0xFFEF0D assigns the hexadecimal value FFEF0D to an integer variable
          called rgbColor
    
    0x10.5      ---     Decimals are not allowed in hexadecimal constants
    98.7U       ---     Unsigned variables must be an integer, therefore can't take a decimal
    0X0G1       ---     Hexadecimal notation only allows letters from A to F
    17777s      ---     s is not a valid variable definer suffix (u, l, and f only)
    0996        ---     Octal notation only allows numbers from 0 to 7
    1.2Fe-7     ---     F does not beling in the expression
    15,000      ---     Values larger than 999 cannot be expressed using commas */