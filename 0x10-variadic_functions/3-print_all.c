#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguements passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *fmt;
	char *str;
	int num;
	double db1;
	char c;

	fmt = format;
	va_start(args, format);

	while (fmt != NULL && *fmt != '\0')
	{
		if (*(fmt + 1) != '\0')
		{
			switch (*fmt)
			{
				case 'c':
					c = va_arg(args, int);
					printf("%c", c);
					break;
				case 'i':
					num = va_arg(args, int);
					printf("%d", num);
					break;
				case 'f':
					db1 = va_arg(args, double);
					printf("%f", db1);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(nil)");
					}
					else
					{
						printf("%s", str);
					}
					break;
				default:
					break;
			}
			if (*(fmt + 1) != '\0' && (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's'))
			{
				printf(", ");
			}
		}
		fmt++;
		}
	printf("\n");

	va_end(args);
}
