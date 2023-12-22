#include "main.h"

/**
 * print_line - prints a line
 * main - uses built in function
 * @n: number of times the character _ should be printed
 * Return: Always (0);
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

