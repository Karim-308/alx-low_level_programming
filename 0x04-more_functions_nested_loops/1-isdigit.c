#include "main.h"

/**
 * _isdigit - check if the value is a digit or not
 * @c: contains value to be compared
 *
 * Return: 1 (success)
 */

int _isdigit(int c)
{
	if ((c > '1' && c < '9'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
