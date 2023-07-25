#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 * @s: the string to be printed in reverse.
 *
 * _strlen - count str length
 * @s: string to b edetermined
 *  Return: length of a string.
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

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
