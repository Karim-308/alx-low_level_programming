#include <stdlib.h>
#include <string.h>

/**
 * _str_concat - Concatenates two strings using a different logic.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string on success, NULL on failure.
*/
char	*_str_concat(char *s1, char *s2)
{
	char	*concat;
	int	len1 = 0;
	int	len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	int i = 0;
	int j = 0;

	while (i < len1)
		concat[j++] = s1[i++];
	i = 0;
	while (i < len2)
		concat[j++] = s2[i++];

	concat[j] = '\0';

	return (concat);
}
