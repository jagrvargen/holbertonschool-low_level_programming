#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head node to NULL.
 *
 * @head: A pointer to a pointer to a linked list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *pointer_one;
	listint_t *pointer_two;

	if (head == NULL || *head == NULL)
		return;
	pointer_one = (*head)->next;
	free(*head);
	*head = NULL;
	while (pointer_one != NULL)
	{
		pointer_two = pointer_one->next;
		free(pointer_one);
		pointer_one = pointer_two;
	}
}
