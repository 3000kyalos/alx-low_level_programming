#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * main - uses built in function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	i = 0;

	while (i < 10)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
		i++;
	}
}
