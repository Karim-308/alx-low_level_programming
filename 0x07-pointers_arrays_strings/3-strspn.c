#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing acceptable characters
 *
 * Return: number of bytes in the initial segment of s which consist of only
 * of bytes from accepting
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p++)
			{
				n++;
				break;
			}
		}
		if (!*p)
			break;
		s++;
	}
	return (n);
}
