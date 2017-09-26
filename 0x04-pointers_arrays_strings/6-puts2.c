#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character in a string, beginning with the first.
 *
 * @str: Takes a pointer to a string as an argument.
 *
 * Return: void
 */
void puts2(char *str)
{
	int j;

	for (j = 0; *(str + j) != '\0'; j++)
		if (j % 2 == 0)
			_putchar(*(str + j));
	_putchar('\n');
}
