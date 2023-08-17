#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: A pointer to the array.
 * @size: The size of the array.
 * @action: A pointer to the function to execute.
 *
 * Return: Nothing.
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

