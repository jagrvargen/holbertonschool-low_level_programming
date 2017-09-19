#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed
 * by a newline.
 * void - takes no arguments
 *
 * Return: void
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
}
