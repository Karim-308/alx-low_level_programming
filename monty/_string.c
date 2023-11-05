#include "monty.h"
/**
 * _strcmp - Compare two strings.
 * @str1: First string.
 * @str2: Second string.
 * Return: 1 if they're identical, 0 otherwise, -1 for error.
 */
int _strcmp(char *str1, char *str2)
{
        if (!str1 || !str2)
                return (-1); /* -1 for error */
        while (*str1 || *str2)
        {
                if (*str1++ != *str2++)
                        return (0);
        }
        return (1);
}
