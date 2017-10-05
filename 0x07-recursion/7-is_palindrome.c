#include "holberton.h"
int wrapper(char *s, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Returns 1 if a string is a palindrome, 0 otherwise
 *
 * @s: A pointer to a string
 *
 * Return: An integer value
 */
int is_palindrome(char *s)
{
	return (wrapper(s, _strlen_recursion(s)));
}

int wrapper(char *s, int len)
{
	if (s[len - 1] != *s)
		return (0);
	else if (len - len == 0)
		return (1);
	return (wrapper(s, len));
}

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
