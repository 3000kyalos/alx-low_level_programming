#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of the diagonals of a square matrix of integer
 * @a: integers
 * @size: size of the square matrix
 *
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
