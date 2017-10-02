#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to a string.
 * @c: Char to be located
 *
 * Return: A pointer to a char.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
