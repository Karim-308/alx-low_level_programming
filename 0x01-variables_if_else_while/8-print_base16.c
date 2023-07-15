/*
 * File: 8-print_base16.c
 * Auth: Karim ibrahim
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    for (i = 0; i < 6; i++)
    {
        putchar(i + 'a');
    }

    putchar('\n');

    return 0;
}
