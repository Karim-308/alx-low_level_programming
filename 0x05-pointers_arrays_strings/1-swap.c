#include <main.h>

/**
 * swap_int - swaping integers
 * @a: first int
 * @b: second
 */

void swap_int(int *a, int *b)
{
	int c  = *a;
	*a = *b;
	*b = c;
}
