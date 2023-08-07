#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: String to duplicate.
 * Return: Pointer to duplicated string on success, NULL if str = NULL
 *  or insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;
	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	dup = strcpy(dup, str);
	return (dup);
}
