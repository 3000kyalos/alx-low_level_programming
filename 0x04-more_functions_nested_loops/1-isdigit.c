#include "main.h"

/**
 * _isdigit - checks if a character is a number
 * @c: variable to check
 * main - uses built in functions
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	char i;

	i = 0;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	return (i);
}
