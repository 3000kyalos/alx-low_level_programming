#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to that head of the node
 * @str: pointer to string to be added
 *
 * Return: address of new element, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_copy;

	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
