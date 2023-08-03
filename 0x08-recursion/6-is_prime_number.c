#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: what to be checked
 *
 * Return: 1 if it is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_rec(n, 2));
}

/**
 * is_prime_recursive - checking if the prime
 * @n: what to be checked
 * @divisor: The current divisor to check
 *
 * Return: 1 if it is prime, 0 if not
 */
int is_prime_rec(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (is_prime_rec(n, divisor + 1));
}
