#include "sort.h"

/**
 * cocktail_sort_list - An implementation of the Cocktail Shaker algorithm
 * on a doubly linked list.
 *
 * @list: A pointer to a doubly linked list.
 *
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *rot;
	int swap_flag;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	rot = *list;
	while (rot != NULL)
	{
		swap_flag = 0;
		if (rot->next->n < rot->n && rot == *list)
		{
			rot->next->prev = rot->prev;
			*list = rot->next;
			rot->next = rot->next->next;
			rot->prev = *list;
			swap_flag = 1;
			print_list(*list);
		}
		while (rot->next != NULL && rot->next->n < rot->n)
		{
			rot->next->prev = rot->prev;
			rot->prev->next = rot->next;
			rot->next = rot->next->next;
			if (rot->next != NULL)
				rot->next->prev = rot;
			rot->prev = rot->prev->next;
			rot->prev->next = rot;
			swap_flag = 1;
			print_list(*list);
		}
		if (rot->next != NULL)
			rot = rot->next;
		if (rot->next == NULL && swap_flag == 1)
			rot = reverse_swap(&rot, list);
		if (rot->next == NULL && swap_flag == 0)
			return;
	}
}

/**
 * reverse_swap - Swaps the list in reverse order.
 *
 * @node: A pointer to a node in a doubly linked list.
 * @list: A pointer to a doubly linked list.
 *
 * Return: void
 */
listint_t *reverse_swap(listint_t **node, listint_t **list)
{
	listint_t *rot;

	rot = *node;
	while (rot->prev != NULL)
	{
		if (rot->prev == *list && rot->prev->n > rot->n)
		{
			rot->prev->next = rot->next;
			if (rot->next != NULL)
				rot->next->prev = rot->prev;
			rot->next = rot->prev;
			rot->next->prev = rot;
			rot->prev = NULL;
			*list = rot;
			print_list(*list);
		}
		else if (rot->prev->n > rot->n)
		{
			rot->prev->next = rot->next;
			rot->next->prev = rot->prev;
			rot->prev = rot->prev->prev;
			if (rot->prev != NULL)
				rot->prev->next = rot;
			rot->next = rot->next->prev;
			rot->next->prev = rot;
			if (rot->prev == NULL)
				*list = rot;
			print_list(*list);
		}
		if (rot->prev != NULL)
			rot = rot->prev;
	}
	return (rot);
}
