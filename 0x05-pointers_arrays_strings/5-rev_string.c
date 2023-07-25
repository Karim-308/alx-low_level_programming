#include "main.h"

/**
 * rev_string - reverse a string.
 *
 * @s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, j, i;
	char x, y;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		x = s[i];
		y = s[j];
		s[i] = y;
		s[j] = x;
		j--;
		i++;
	}
}
