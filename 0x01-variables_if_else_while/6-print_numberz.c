/*
 * File: 6-print_numberz.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
    int main()
{
	int n;

	for (n = 0; n < 10; n++){
	
		putchar(n % 10 + '0');
}
	putchar('\n');

	return (0);
}
