#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		size_t str_len = (current->str != NULL) ? strlen(current->str) : 0;

		printf("[%lu] ", (unsigned long)str_len);
		printf("%s\n", (current->str != NULL) ? current->str : "(nil)");
		node_count++;
		current = current->next;
	}
	return (node_count);
}
