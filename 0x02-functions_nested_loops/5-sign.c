#include "main.h"

/**
 * print_sign - return 0 letter not lowercase, 1 letter if is lowercase
 *
 * @n: int to be checked
 *  Return: Always 0 (success)
  */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}

}
