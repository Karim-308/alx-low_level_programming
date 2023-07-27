#include "main.h"

int _length(char *s);

/**
 * _strcat - This function appends the src string to the dest string, 
 * overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * including the terminating null byte,
 * to the end of the string pointed to by @dest.
 * @dest: A destination where to be added.
 * @src: The source of the string to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int end;
	int j;

	end = _length(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[end + j] = src[j];
		j++;
	}
	dest[end + j] = '\0';

	return (dest);
}

/**
 * _length - gets the length of any string
 * @s: String to be determined
 *
 * Return: Length of s
 */
int _length(char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++len;
		i++;
	}

	return (len);
}
