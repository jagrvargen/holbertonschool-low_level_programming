#include "sort.h"

/**
 * insertion_sort_list - An implementation of the insertion sort algorithm.
 *
 * @listint_t: A double pointer to a doubly linked list.
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *eosl; /* end of sorted line */
	listint_t *current;

	if (list == NULL || *list == NULL)
		return;

	eosl = *list;
	current = eosl->next;

	while (current)
	{
		if (current->n < eosl->n)
		{
			while (current->prev && current->n < current->prev->n)
			{
				current->prev->next = current->next;
				if (current->next != NULL)
					current->next->prev = current->prev;
				current->prev = current->prev->prev;
				if (current->next != NULL)
					current->next = current->next->prev;
				else if (current->next == NULL && current->prev == NULL)
					current->next = *list;
				else
					current->next = current->prev->next;
				if (current->prev != NULL)
					current->prev->next = current;
				current->next->prev = current;
				if (current->prev == NULL)
					*list = current;
				print_list(*list);
			}
		}
		else
			eosl = current;
		current = eosl->next;
	}
}
