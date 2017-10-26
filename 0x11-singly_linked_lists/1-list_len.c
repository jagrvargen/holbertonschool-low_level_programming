#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list.
 *
 * @h: A pointer to a list element.
 *
 * Return: An unsigned integer value.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
