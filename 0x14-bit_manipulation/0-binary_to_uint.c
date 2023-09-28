#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertible char
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int total = 0;

    if (b == NULL)
        return (0);

    for (int i = 0; b[i]; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        total <<= 1; // Shift left by 1 to make room for the next bit
        if (b[i] == '1')
            total |= 1; // Set the least significant bit to 1 if it's '1'
    }

    return (total);
}
