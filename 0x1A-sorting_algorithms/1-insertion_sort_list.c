#include "sort.h"

/**
 * insertion_sort_list - An implementation of the insertion sort algorithm.
 *
 * @list: A double pointer to a doubly linked list.
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *e; /* end of sorted line */
	listint_t *c;

	if (list == NULL || *list == NULL)
		return;

	e = *list;
	c = e->next;

	while (c)
	{
		if (c->n < e->n)
		{
			while (c->prev && c->n < c->prev->n)
			{
				c->prev->next = c->next;
				if (c->next != NULL)
					c->next->prev = c->prev;
				c->prev = c->prev->prev;
				if (c->next != NULL)
					c->next = c->next->prev;
				else if (c->next == NULL && c->prev == NULL)
					c->next = *list;
				else
					c->next = c->prev->next;
				if (c->prev != NULL)
					c->prev->next = c;
				c->next->prev = c;
				if (c->prev == NULL)
					*list = c;
				print_list(*list);
			}
		}
		else
			e = c;
		c = e->next;
	}
}
