#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: A pointer to a header struct.
 *
 * Return: An unsigned integer value.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
