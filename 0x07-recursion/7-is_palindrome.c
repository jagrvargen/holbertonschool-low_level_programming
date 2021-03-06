#include "holberton.h"
int wrapper(char *s, int len, int i);
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
	if (*s == '\0')
		return (0);
	return (wrapper(s, _strlen_recursion(s), 0));
}

/**
 * wrapper - Determines if string is palindrome
 *
 * @s: A pointer to a string.
 * @len: An integer value.
 * @i: An integer value
 *
 * Return: An integer value of 1 or 0.
 */
int wrapper(char *s, int len, int i)
{
	if (s[len - 1] != s[i])
		return (0);
	else if (len - 1 == i || len == i)
		return (1);
	return (wrapper(s, len - 1, i + 1));
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
