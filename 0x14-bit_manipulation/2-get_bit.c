#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number.
 * @index: The index, starting from 0 of the bit you want to get.
 *
 * Return: The value of the bit at index "index" or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int current_index = 0;

	if (index >= (sizeof(n) * 8))
		return (-1);

	if (n == 0 && index == 0)
		return (0);

	while (n > 0)
	{
		if (current_index == index)
			return (n % 2);

		n >>= 1;
		current_index++;
	}

	if (index == current_index)
		return (0);

	return (-1);
}

