#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int flag = 0; /* To handle the printing of leading zeros */

	/* If n is zero, just print it */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Start from the leftmost bit and iterate to the rightmost */
	for (int i = (sizeof(n) * 8) - 1; i >= 0; i--)
	{
		if ((n & (mask << i)) != 0)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
			_putchar('0');
	}
}

