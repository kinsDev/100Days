/**
 * Write a function that converts a binary number to an unsigned int.
 */

#include <stdio.h>

unsigned int binary_to_unsigned_integer(const char *binary)
{
    unsigned int result = 0;
    
    if (!binary)
        return 0;
    
    while (*binary)
    {
        if (*binary == '0')
        {
            result <<= 1; // Left-shift result by 1
        }
        else if (*binary == '1')
        {
            result <<= 1; // Left-shift result by 1
            result |= 1;  // Set the least significant bit to 1
        }
        else
        {
            return 0; // Invalid input character
        }
        
        binary++; // Move to the next character
    }
    
    return result;
}

int main(void)
{
    unsigned int n;

    n = binary_to_unsigned_integer("1");
    printf("%u\n", n);
    n = binary_to_unsigned_integer("101");
    printf("%u\n", n);
    n = binary_to_unsigned_integer("1e01");
    printf("%u\n", n);
    n = binary_to_unsigned_integer("1100010");
    printf("%u\n", n);
    n = binary_to_unsigned_integer("0000000000000000000110010010");
    printf("%u\n", n);
    
    return 0;
}
