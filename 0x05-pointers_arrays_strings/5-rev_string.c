#include "main.h"

/**
 * rev_string - reverse a string.
 *
 * @s: the string is to be reversed.
 */

void rev_string(char *s)
{
	int length = 0;
	length = _strlength(s);	


	for (int i = 0; i < length / 2; i++)
	{

		char temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

