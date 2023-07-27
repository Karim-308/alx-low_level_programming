#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array req to re
 * @n: size of
 */
void reverse_array(int *a, int n)
{
	int i, x, tmp;

	x = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[x];
		a[x--] = tmp;
	}
}
