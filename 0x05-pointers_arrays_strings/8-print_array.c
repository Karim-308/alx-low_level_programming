#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: int to be checked
 * @n: int to be checked
 * Return: 0 is a success
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)

		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
