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

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);

        total <<= 1; // Shift the total left by 1 bit
        total += (*b - '0'); // Add the new bit to the total
        b++; // Move to the next character in the string
    }

    return (total);
}