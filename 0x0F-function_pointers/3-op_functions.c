#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @a: First.
 * @b: Second.
 * Return: The result.
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Subtract two numbers.
 * @a: First.
 * @b: Second.
 * Return: The result of the subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiplies two numbers.
 * @a: First.
 * @b: Second.
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divides two numbers.
 * @a: First.
 * @b: Second.
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - Modulus of two numbers.
 * @a: First.
 * @b: Second.
 * Return: The result of the modulus.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
