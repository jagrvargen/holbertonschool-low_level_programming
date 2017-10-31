#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: A pointer to a linked list.
 * @index: An unsigned integer value.
 *
 * Return: A pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t **pointer;
	unsigned int tracker;

	if (head == NULL)
		return (NULL);
	pointer = &head;
	tracker = 0;
	while (*pointer != NULL && tracker != index)
	{
		*pointer = (*pointer)->next;
		tracker++;
	}
	if (tracker == index)
		return (*pointer);
	return (NULL);
}
