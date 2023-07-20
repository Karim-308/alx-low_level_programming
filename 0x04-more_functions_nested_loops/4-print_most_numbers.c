#include "main.h"

/**
*print_most_numbers - print 0 to 9  but not 2,4
*Return: Doesn't
*/

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{

		if ( c == 2 || c == 4 )
			continue;
		else
			_putchar(c+'0');

	}
	_putchar('\n');
}
