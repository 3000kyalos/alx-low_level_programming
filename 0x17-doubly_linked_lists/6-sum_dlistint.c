#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - sums all the data of a d-list
 * @head: pointer to head of the list
 *
 * Return: sum, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
