#include <stdio.h>
/**
 * main - print the number of arguments passed
 *
 * @args: argument count or number
 * @argv: argument vector
 *
 * Return: This return to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);

	(void)argv;

	return (0);
}
