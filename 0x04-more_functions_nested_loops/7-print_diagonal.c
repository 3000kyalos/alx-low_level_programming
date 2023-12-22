#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print the line
 * main - uses built in functions
 * Return: Always 0 Success
 */

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
