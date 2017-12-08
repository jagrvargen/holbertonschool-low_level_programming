#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of a doubly linked list.
 *
 * @head: A pointer to a pointer to a doubly linked list.
 * @n: A constant integer value to be assigned to new node.
 *
 * Return: A pointer to the new node element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *search;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	search = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (search != NULL)
		{
			new_node->prev = search;
			search = search->next;
		}
		new_node->prev->next = new_node;
	}
	return (new_node);
}
