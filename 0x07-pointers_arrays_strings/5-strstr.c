#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The string to search for.
 *
 * Return: A pointer to the beginning of the substring in haystack that matches
 * the entire string needle, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n == *h && *n != '\0' && *h != '\0')
		{
			n++;
			h++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return ('\0');
}
