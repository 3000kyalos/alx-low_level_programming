#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: variable to be allocated memory
 *
 * Return: pointer to allocated memory, other 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int *)malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
