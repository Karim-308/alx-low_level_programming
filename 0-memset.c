#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: start in memory
 * @b: the value
 * @n: number of bytes
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
