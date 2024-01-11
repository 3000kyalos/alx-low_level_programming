#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * _sqrt_recursion_helper - calculates the square root of a number
 * @n: number to find the square root
 * @guess: keeps track of the current guess for the square root
 *
 * Return: square root
 */

int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, guess + 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, 0));
	}
}
