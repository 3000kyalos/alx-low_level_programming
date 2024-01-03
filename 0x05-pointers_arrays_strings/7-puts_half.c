#include "main.h"
#include <string.h>
/**
 * puts_half - prints half a string
 * @str: string to be halfed
 * main - uses built in function
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int length, start;

	length = 0;

	while (str[length] != '\0')
		length++;
	start = (length) / 2;
	if (length % 2 != 0)
		start = ((length - 1) / 2) + 1;
	for (; start < length; start++)
		_putchar(str[start]);
	_putchar('\n');
}

