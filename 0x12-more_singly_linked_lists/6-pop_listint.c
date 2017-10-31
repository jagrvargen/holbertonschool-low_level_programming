#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list and returns
 * its data (n).
 *
 * @head: A pointer to a pointer to a linked list.
 *
 * Return: An integer value.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *pointer;

	if (head == NULL || *head == NULL)
		return (0);
	pointer = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = pointer;
	return (data);
}
