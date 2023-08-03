#include "main.h"

/**
 * _pow_recursion - x power y
 * @x: base
 * @y: power
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y < 0)
	{
		return (-1);
	}
	return (1);
}
