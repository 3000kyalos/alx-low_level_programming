#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
