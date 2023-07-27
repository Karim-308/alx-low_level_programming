#include "main.h"

/**
 * _strncpy - Copies at most an inputted number of bytes
 * @dest: To store the string copy.
 * @src: The source to be stored.
 * @n: The maximum number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j= 0;

	while (src[j] != '\0' && i < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j< n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
