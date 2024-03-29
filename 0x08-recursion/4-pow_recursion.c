#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to be raised
 * @y: power to be raised to
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1 / (x * _pow_recursion(x, -y - 1)));
	}
}
