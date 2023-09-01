#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be flipped 
 * to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Count the set bits in xor_result */
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

