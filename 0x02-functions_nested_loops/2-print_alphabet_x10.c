#include "main.h"

/**
 * print_alphabet - prints 10 times lowercase alaphpets
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
        int i = 97;
	int j = 1;

	for (; j <= 10; j++)
	{ 
        for (; i <= 122; i++)
        {
                _putchar(i);
        }
	_putchar('\n');
	}
}
