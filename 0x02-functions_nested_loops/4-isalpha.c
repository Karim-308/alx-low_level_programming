#include "main.h"

/**
 * _isalpha- check if the value is a letter or not
 * @c: contains value to be compared
 * Return: 1 (success)
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
