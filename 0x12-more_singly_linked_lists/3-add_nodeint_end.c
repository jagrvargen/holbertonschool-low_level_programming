#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to a pointer to a head node.
 * @n: An integer value.
 *
 * Return: A pointer to a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *pointer;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
		return (NULL);
	pointer = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (pointer->next != NULL)
		pointer = pointer->next;
	pointer->next = new_node;
	return (new_node);
}
