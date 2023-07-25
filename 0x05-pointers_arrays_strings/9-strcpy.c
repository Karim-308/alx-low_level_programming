#include "main.h"
/**
 * _strcpy - copy the string from src to dest
 * @dest: to be copied into 
 * @src: to be copied from
 * Return: 0 if a success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
