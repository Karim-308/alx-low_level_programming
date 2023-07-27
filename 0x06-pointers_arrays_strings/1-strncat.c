#include "main.h"
int get_length(char *s);

/**
 * _strncat - Concatenates two strings until n chars of end of src
 * @dest:  to be added to.
 * @src: to be added.
 * @n: The number of bytes to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	i = get_length(dest);

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}



/**
 * get_length - returns the length of a string
 * @s: String whose length we wish to determine
 *
 * Return: Length of s
 */
int get_length(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
