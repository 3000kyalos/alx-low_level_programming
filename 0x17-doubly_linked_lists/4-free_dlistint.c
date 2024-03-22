#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint - frees a d-list
 * @head: pointer to head of the d-list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
