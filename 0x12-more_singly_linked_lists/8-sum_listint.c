#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: A pointer to a linked list.
 *
 * Return: An integer sum value.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t **pointer;

	if (head == NULL)
		return (0);
	pointer = &head;
	sum = 0;
	while (*pointer != NULL)
	{
		sum += (*pointer)->n;
		*pointer = (*pointer)->next;
	}
	return (sum);
}
