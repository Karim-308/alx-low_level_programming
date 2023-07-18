#include "main.h"

/**
 * _islower- check if lower case or not
 * @c: contains value to be compared
 * Return: 1 (success)
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
