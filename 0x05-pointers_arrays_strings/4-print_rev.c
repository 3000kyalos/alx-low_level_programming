#include "main.h"
#include <string.h>
/**
 * print_rev - reverses a string
 * @s: string to reverse
 * main - uses built in function
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
