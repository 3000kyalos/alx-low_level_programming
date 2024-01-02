#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check variable
 * main - uses built in function
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
