/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to calculate the square
 *
 * Return: The natural square root of n, or -1 if it does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_rec(n, 1));
}

/**
 * sqrt_rec - A function for calculating the square root recursively
 * @n: The number to calculate the square root of
 * @i: The current value to check
 *
 * Return: natural square root of n, and -1 if not
 */
int sqrt_rec(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_rec(n, i + 1));
}
