#include "3-calc.h"

/**
 * main - entry point
 * @argc: Arg count.
 * @argv: Arg vector.
 *
 * Return: 0 on success, other values on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*operator_func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	operator_func = get_op_func(argv[2]);
	if (!operator_func)
	{
		puts("Error");
		exit(99);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	result = operator_func(num1, num2);

	printf("%d\n", result);

	return (0);
}

