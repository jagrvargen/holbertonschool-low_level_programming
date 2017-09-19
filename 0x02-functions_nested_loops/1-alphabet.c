#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed
 * by a newline.
 * void - takes no arguments
 *
 * Return: always 0 (success)
 *
 */
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
