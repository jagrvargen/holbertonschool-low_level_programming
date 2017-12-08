#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the index.
 *
 * @head: A pointer to a pointer to a doubly linked list.
 * @index: An unsigned integer value.
 *
 * Return: An integer 1 if successful, or -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete;

	if (head == NULL || *head == NULL)
		return (-1);
	delete = *head;
	while (delete != NULL && index > 0)
	{
		delete = delete->next;
		index--;
	}
	if (index > 0)
		return (-1);
	if (delete->prev == NULL)
		*head = (*head)->next;
	else
		delete->prev->next = delete->next;
	if (delete->next != NULL)
		delete->next->prev = delete->prev;
	return (1);
}
