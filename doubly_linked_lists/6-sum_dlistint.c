#include "lists.h"

/**
 * sum_dlistint - function that returns the sum.
 * @head: Pointer to the head of the doubly linked list.
 * Return: Sum of all the data in the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

