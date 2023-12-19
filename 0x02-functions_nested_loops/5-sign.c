#include "main.h"

/**
 * print_sign - checks if input is +, - or 0
 * @n: variable to check the sign of the number
 * main - uses built in function
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = 1;
	}
	else
	{
		_putchar('0');
		i = 0;
	}
	return (i);
}
