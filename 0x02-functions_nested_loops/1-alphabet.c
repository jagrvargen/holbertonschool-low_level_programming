#include "holberton.h"

/**
 * main - Entry point
 *
 * void - takes no arguments
 *
 * Return: always 0 (success)
 *
 */
int main(void)
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
