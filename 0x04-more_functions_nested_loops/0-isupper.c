#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * main - uses built in functions
 * @c: variable to check if letter is uppercase
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	int abc;

	abc = 0;

	if (c >= 'A' && c <= 'Z')
	{
		abc = 1;
	}
	return (abc);
}
