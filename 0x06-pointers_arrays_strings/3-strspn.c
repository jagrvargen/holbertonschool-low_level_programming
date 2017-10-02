#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Pointer to a string.
 * @accept: Pointer to a string
 *
 * Return: Unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	int i;

	length = 0;
	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != *s; i++)
		{
			if (accept[i] == '\0')
				return (length);
		}
		length++;
	}
	return (length);
}
