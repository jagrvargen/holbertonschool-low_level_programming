#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of a doubly linked list.
 *
 * @head: A pointer to a pointer to a doubly linked list.
 * @n: A constant integer value to be assigned to new node.
 *
 * Return: A pointer to a dlistint_t node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
