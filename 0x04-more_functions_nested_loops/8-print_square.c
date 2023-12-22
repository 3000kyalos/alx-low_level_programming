#include "main.h"

/**
 * print_square - prints a square
 * @size: is the size of the square
 * main - uses built in function
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 1; h <= size; h++)
	{
		for (w = 1; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
