#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times lowercase alphabets
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 1;

	for (; j <= 10; j++)
	{
		i = 97;
		for (; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
