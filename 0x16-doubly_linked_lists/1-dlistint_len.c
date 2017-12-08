#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *
 * @h: A pointer to the first node of a doubly linked list.
 *
 * Return: An unsigned integer value indicating the length of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p;
	size_t count;

	if (h == NULL)
		return (0);

	p = h;
	count = 0;
	while (p != NULL)
	{
		p = p->next;
		count += 1;
	}
	return (count);
}
