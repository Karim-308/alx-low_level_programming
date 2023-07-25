#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 * @s: the string to be printed in reverse.
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int length;

	length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
