#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize
 *
 * Return: pointer to the array, otherwise NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
