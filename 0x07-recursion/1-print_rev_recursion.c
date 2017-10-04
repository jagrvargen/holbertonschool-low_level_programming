#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: A pointer to a string
 *
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
