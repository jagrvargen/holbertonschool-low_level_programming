#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: A pointer to a string.
 *
 * Return: An integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
