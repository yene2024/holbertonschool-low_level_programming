#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}

