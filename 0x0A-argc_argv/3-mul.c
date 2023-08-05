#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int index;
	int multiplication;

	multiplication = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}

	printf("%d\n", multiplication);

	return (0);
}
