#include "holberton.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * @s: Takes a pointer to a string as an argument.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
