#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 *
 * @argc: argument number or count
 * @argv: argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}
