#include "main.h"

/**
 * print_line - prints underscore x n 
 * @n: times numbers
 *
 * Return: void
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
