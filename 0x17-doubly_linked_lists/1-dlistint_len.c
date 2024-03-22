#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{

		len++;
		current = current->next;
	}
	return (len);
}
