#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * main - uses built in functions
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
