#include "main.h"
#include <math.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary number.
 *
 * Return: The unsigned int conversion of b.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len = 0, i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res = res * 2 + (b[i] - '0');
	}

	return (res);
}
