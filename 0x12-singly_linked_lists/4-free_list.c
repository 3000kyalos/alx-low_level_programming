#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
