#include "holberton.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 *
 * @str: Takes a pointer to a string as an argument.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
