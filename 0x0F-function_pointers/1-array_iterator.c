#include "main.h"

/**
 * array_iterator - Executes a function for each  element of an array.
 * @array: A pointer to an array.
 * @size: The size of the array.
 * @action: A pointer to the function to be  execute.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array && action)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

