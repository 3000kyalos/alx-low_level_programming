#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to separate the numbers
 * @n: numbers of integers passed to the function
 *
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num, divisor;
	const char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (i > 0 && separator != NULL)
		{
			for (s = separator; *s != '\0'; ++s)
			{
				_putchar(*s);
			}
		}

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		divisor = 1;
		while (num / divisor > 9)
		{
			divisor *= 10;
		}
		while (divisor != 0)
		{
			_putchar(num / divisor + '0');
			num %= divisor;
			divisor /= 10;
		}
	}
	_putchar('\n');
	va_end(args);
}
