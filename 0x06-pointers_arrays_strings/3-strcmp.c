#include "main.h"

/**
 * _strcmp - compares two sent strings
 * @s1: first string
 * @s2: second string
 *
 * Return: less than 0 if s1 < than s2, 0 if they're = ,
 * more than 0 if s1 is greater
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
