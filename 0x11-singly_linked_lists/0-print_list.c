#include "lists.h"

int _puts(char *s);
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
		_putchar('[');
		if (h->str == NULL)
			h->len = 0;
		_putchar((h->len) + '0');
		_putchar(']');
		_putchar(' ');
		if (h->str == NULL)
			_puts("(nil)");
		else
			_puts(h->str);
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * _puts - A function that prints a string.
 *
 * @s: A pointer to a string.
 *
 * Return: An integer value.
 */
int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
