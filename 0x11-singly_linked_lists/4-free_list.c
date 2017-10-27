#include "lists.h"

/**
 * free_list - Frees a list_t list from memory.
 *
 * @head: A pointer to a list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *pointer;

	if (head == NULL)
		return;
	pointer = head;
	while (head != NULL)
	{
		pointer = head->next;
		free(head->str);
		free(head->next);
		free(head);
		head = pointer;
	}
}
