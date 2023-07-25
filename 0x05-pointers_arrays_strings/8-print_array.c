#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * Owned by Bwave
 * @a: int to be checked
 * @n: int to be checked
 * Return: 0 is a success
 */
void print_array(int *a, int n)
{
	int x;

	if (n<0)
		return;
	
	for (x = 0; x < n -1 ; x++)
		
		printf("%d, ", a[x]);
		

			printf("%d", a[n-1]);
printf("\n");
}
