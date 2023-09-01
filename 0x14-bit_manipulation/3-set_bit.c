#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number.
 * @index: The index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Use the get_bit function to check if index is within range */
    if (get_bit(*n, index) == -1)
        return (-1);

    /* Create a number with a 1 bit only at the desired position */
    unsigned long int mask = 1UL << index;

    /* OR n with the mask to set the bit at the desired position to 1 */
    *n = *n | mask;

    return (1);
}

