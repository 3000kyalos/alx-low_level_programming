#include "main.h"

/**
 * is_prime_recursive - helper function to check if a numberis a prime number
 * @i: current divisor being checked
 * @n: input number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - checks if input is a prime number
 * @n: input number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}

