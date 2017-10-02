#include "holberton.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 *
 * @s: Pointer to a string
 * @accept: Pointer to a set of chars
 *
 * Return: Pointer to location of first matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (accept[i] == *s)
				return (s);
	}
	return (NULL);
}
