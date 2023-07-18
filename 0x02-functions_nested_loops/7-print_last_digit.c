#include "main.h"

/**
 * print_last_digit - return 0 the positive of any number
 *
 * @n: int to be checked
 *  Return: Always 0 (success)
  */
int print_last_digit(int n)
{
	if (n >=  0)
	{
		n %= 10;
		_putchar(n + '0');
		return (n);
	}

	else
	{
		n %= 10;
		n *= -1;
		_putchar(n + '0');
		return (n % 10);
	}

}
