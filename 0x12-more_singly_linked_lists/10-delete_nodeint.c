#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of a linked list.
 *
 * @head: A pointer to a pointer to a linked list.
 * @index: An unsigned integer value.
 *
 * Return: An integer (1) for success, (-1) for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *point_one, *point_two;
	unsigned int tracker;

	if (head == NULL || *head == NULL)
		return (-1);
	point_one = *head;
	point_two = point_one;
	tracker = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		free(point_one);
		return (1);
	}
	while (point_one != NULL && tracker < index)
	{
		point_one = point_one->next;
		tracker++;
		if (point_one != NULL && tracker != index)
			point_two = point_one;
	}
	if (tracker == index)
	{
		point_two->next = point_one->next;
		free(point_one);
		return (1);
	}
	return (-1);
}
