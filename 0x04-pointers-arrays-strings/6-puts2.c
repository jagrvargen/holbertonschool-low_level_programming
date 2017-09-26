#include "holberton.h"

/**
 * puts2 - Prints every other character in a string, beginning with the first.
 *
 * @str: Takes a pointer to a string as an argument.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
