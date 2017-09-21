#include "holberton.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n: integer which determines length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
