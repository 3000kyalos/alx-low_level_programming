#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes on the list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	for (count = 0; h; h = (*h).next, count++)
	{
		printf("%d\n", (*h).n);
	}
	return (count);
}
