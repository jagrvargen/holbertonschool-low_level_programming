#include "holberton.h"

/**
 * _strstr - Locates a substring within a string
 *
 * @haystack: A pointer to a string.
 * @needle: A pointer to a substring.
 *
 * Return: A pointer to a substring or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	i = 0;
	for (; *haystack != '\0'; haystack++)
	{
		p = &*haystack;
		while (needle[i] == *p)
		{
			i++;
			p++;
			if (needle[i] == '\0' && i > 0)
				return (haystack);
			else if (needle[i] != *p)
				i = 0;
		}
	}
	return (NULL);
}
