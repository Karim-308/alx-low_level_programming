#include "function_pointers.h"

/**
 * print_name - Executes a function to print a name.
 * @name: A name.
 * @f: pointer to a function that Returns nothing.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

