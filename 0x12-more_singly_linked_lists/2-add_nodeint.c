#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a listint_t list.
 *
 * @head: A pointer to a pointer.
 * @n: An integer value.
 *
 * Return: A pointer to a new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
