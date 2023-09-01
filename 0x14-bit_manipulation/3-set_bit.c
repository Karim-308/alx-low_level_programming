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

	unsigned long int mask = 1UL << index;

	if (get_bit(*n, index) == -1)
	return (-1);


	*n = *n | mask;

	return (1);
}

