#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of  d-list
 * @head: pointer to the head of the d-list
 * @index: index of the node starting from0
 *
 * Return: nth node, NULL if otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count != index || current == NULL)
	{
		return (NULL);
	}
	return (current);
}
