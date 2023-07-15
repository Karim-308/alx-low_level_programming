/*
 * File: 7-print_tebahpla.c
 * Auth: Karim-308
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
 
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);

	putchar('\n');

	return (0);
}
