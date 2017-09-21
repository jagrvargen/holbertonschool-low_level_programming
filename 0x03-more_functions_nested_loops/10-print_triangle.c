#include "holberton.h"

/**
 * print_triangle - prints triangle followed by a new line
 *
 * @size: integer which determines size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int spaces;

	spaces = size - 1;
	for (i = 0; i < size; i++)
	{
		k = spaces;
		for (j = 0; j < size; j++)
		{
			if (k > 0)
			{
				_putchar(' ');
				k--;
			}
			else
				_putchar('#');
		}
		_putchar('\n');
		spaces--;
	}
	if (size <= 0)
		_putchar('\n');
}
