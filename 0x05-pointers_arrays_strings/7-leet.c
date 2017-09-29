#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 *
 * @s: A pointer to a string.
 *
 * Return: returns a pointer to a string
 */
char *leet(char *s)
{
	int i;
	int j;
	char lower[] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char upper[] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = j + '0';
	}
	return (s);
}
