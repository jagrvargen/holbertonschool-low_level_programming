#include "holberton.h"

/**
 * _puts_recursion - Prints a string using recursion
 *
 * @s: A pointer to a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	++s;
	if (*s != '\0')
		_puts_recursion(s);
	else if (*s == '\0')
		_putchar('\n');
}
