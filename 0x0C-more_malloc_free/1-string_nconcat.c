#include "main.h"
#include <stdlib.h>

/**
 * _string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of byte from the s2 to concatenate
 *
 * Return: Pointer to the concatenated space in memory, or NULL on failure
*/
char *_string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, size;

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";
	
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	
	if (n >= len2)
		n = len2;
	
	size = len1 + n + 1;

	concat = malloc(size * sizeof(char));
	if (concat == NULL)
		return (NULL);
	
	for (int i = 0; i < len1; i++)
		concat[i] = s1[i];
	
	for (int i = 0; i < n; i++)
		concat[len1 + i] = s2[i];

	concat[size - 1] = '\0';

	return (concat);
}
