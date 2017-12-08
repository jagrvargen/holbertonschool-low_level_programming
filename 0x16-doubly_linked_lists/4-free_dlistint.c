#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list from memory.
 *
 * @head: A pointer to a doubly linked list.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	if (head == NULL)
		return;

	freed = head;
	while (freed != NULL)
	{
		head = head->next;
		free(freed);
		freed = head;
	}
}
