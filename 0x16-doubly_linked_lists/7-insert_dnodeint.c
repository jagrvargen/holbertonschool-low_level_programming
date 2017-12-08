#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node into a doubly linked list at
 * a given position.
 *
 * @h: A pointer to a pointer to a doubly linked list.
 * @idx: An unsigned integer indicating index.
 * @n: An integer value.
 *
 * Return: A pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *search;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	search = *h;

	while (search != NULL && idx > 0)
	{
		new_node->prev = search;
		new_node->next = search->next;
		search = search->next;
		idx--;
	}

	if (idx > 0)
		return (NULL);
	new_node->prev->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
