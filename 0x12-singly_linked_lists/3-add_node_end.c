#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: address of new element, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_copy;

	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (new_node);
	}
	new_node->str = str_copy;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
