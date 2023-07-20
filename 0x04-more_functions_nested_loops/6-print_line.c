#include "main.h"

/**
 * print_line - printing the underscores
 * @n: times numbers
 *
 * Return: nothing
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
