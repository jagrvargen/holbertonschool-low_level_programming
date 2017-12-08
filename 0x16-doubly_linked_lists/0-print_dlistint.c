#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: A pointer to the first node of a doubly linked list.
 *
 * Return: An unsigned integer value indicating number of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *printer;
	size_t count;

	if (h == NULL)
		return (0);

	printer = h;
	count = 0;
	while (printer != NULL)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
		count += 1;
	}
	return (count);
}
