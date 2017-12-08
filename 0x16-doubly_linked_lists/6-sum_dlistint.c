#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 *
 * @head: A pointer to a doubly linked list.
 *
 * Return: An integer value.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *search;
	int sum = 0;

	if (head == NULL)
		return (0);

	search = head;
	while (search != NULL)
	{
		sum += search->n;
		search = search->next;
	}
	return (sum);
}
