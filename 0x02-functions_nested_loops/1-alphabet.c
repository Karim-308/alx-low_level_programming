#include "main.h"

/**
 * print_alphabet - prints lowercase alaphpets
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int i =97;
    
	for (; i<=122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
