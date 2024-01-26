#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: string to print between the string
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
		{
			str = "(nil)";
		}
		while (*str != '\0')
		{
			_putchar(*str);
			++str;
		}
		if (separator != NULL && i < n - 1)
		{
			while (*separator != '\0')
			{
				_putchar(*separator);
				++separator;
			}
		}
	}
	_putchar('\n');

	va_end(args);
}
