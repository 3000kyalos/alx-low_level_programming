#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns number of of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
