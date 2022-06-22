#include "main.h"

/**
 * _pow_recursion - function to the power of y.
 *
 * @x: tu
 * @y: yu
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}