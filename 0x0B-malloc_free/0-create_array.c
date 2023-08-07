#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to initialize the array
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return (NULL);

    char *ptr = malloc(size * sizeof(char));
    if (ptr == NULL)
        return (NULL);

    unsigned int i;
    for (i = 0; i < size; i++)
    {
        *(ptr + i) = c;
    }
    
    return ptr;
}
