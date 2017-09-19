#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in
 * lowercase, followed by a newline
 * void - takes no arguments
 *
 * return - no return value
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
