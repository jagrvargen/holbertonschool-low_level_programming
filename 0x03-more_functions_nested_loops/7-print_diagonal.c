#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 *
 * @n: number of times \ is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		if (n > 0)
			_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
