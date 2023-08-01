#include "main.h"
/**
 * _memcpy - a function to copy 
 * @dest: dst
 * @src: source
 * @n: number of bytes
 * Return: copied no of bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i;

	for (i = n; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
