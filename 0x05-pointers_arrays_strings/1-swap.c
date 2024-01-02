#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first value to swap
 * @b: second value to swap
 * main - uses built in function
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
