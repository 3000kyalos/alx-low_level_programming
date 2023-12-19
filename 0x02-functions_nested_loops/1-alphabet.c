#include "main.h"

/**
 * print_alphabet - print the alphabet
 * main - uses built in function
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	_putchar('\n');
}
