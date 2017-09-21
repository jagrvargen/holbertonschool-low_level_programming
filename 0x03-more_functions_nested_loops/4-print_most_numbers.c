#include "holberton.h"

/**
 * print_most_numbers - prints number 0-9, except 2 and 4
 *
 * void - takes no argument
 *
 * Return: no return value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
