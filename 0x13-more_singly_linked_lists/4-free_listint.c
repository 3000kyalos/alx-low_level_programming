#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
