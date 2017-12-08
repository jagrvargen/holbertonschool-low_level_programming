#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dnodeint_t linked list.
 *
 * @head: A pointer to a doubly linked list.
 * @index: An unsigned integer value indicating the index sought.
 *
 * Return: A pointer to a dlistint_t node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *search;

	if (head == NULL)
		return (NULL);

	search = head;
	while (search != NULL && index > 0)
	{
		search = search->next;
		index--;
	}
	return (search);
}
