#include "main.h"

/**
 * _isalpha - checks if input is uppercase
 * @c: variable to check if input is uppercase
 * main - uses built in function
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
