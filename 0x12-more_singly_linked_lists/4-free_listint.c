#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: A pointer to a linked list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *pointer;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
