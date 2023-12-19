#include "main.h"

/**
 * _islower - check for lowercase characte
 * @c: variable to check if input is lowercase
 * main - uses built in function
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int abc;

	abc = 0;

	if (c >= 'a' && c <= 'z')
	{
		abc = 1;
	}
	return (abc);
}

