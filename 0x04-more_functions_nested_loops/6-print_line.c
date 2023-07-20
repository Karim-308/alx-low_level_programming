#include "main.h"

/**
 * print_line - prints underscore x n 
 * @n: how many times
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
