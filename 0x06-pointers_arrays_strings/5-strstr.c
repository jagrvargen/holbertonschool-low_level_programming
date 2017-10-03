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
	char *ph;
	char *pn;

	for (; *haystack != '\0'; haystack++)
	{
		ph = &*haystack;
		pn = &*needle;
		while (*ph == *pn)
		{
			ph++;
			pn++;
			if (*pn == '\0')
				return (haystack);
			else if (*ph != *pn)
				pn = &*needle;
		}
	}
	return (NULL);
}
