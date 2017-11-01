#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: A pointer to a pointer to a linked list.
 *
 * Return: A pointer to a linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *mid_p;
	listint_t *back_p;

	if (head == NULL || *head == NULL)
		return (NULL);
	mid_p = *head;
	back_p = NULL;
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
		mid_p->next = back_p;
		back_p = mid_p;
		mid_p = *head;
	}
	(*head)->next = back_p;
	return (*head);
}
