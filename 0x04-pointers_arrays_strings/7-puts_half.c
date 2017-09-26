#include "holberton.h"

/**
 * puts_half - Prints the second half of a string
 *
 * @str: takes a pointer to a string as an argument
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (i = 0; *(str + i) != '\0';)
		i++;
	i--;

	if (i % 2 == 1)
		j = (i - 1) / 2;
	else
		j = i / 2;

	for (k = 0; *(str + k) != '\0'; k++)
		if (k > j)
			_putchar(*(str + k));
	_putchar('\n');
}
