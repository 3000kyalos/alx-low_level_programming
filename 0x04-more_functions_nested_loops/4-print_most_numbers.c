#include "main.h"

/**
 * print_most_numbers - prints number 0 to 9 except 2 and 4
 * main - uses built in functions
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
