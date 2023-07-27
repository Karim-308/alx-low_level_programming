#include "main.h"

/**
 * leet - writes the string in 1337 code
 * @s: string to be encrypted
 *
 * Return: the result;
 */
char *leet(char *s)
{
	int i, j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}
		}
	}

	return (s);
}
