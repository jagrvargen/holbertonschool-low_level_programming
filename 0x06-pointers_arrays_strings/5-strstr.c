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
	int j;

	i = 0;
	j = 0;
	for (; *haystack != '\0'; haystack++)
	{
		while (needle[i] == haystack[j])
		{

			i++;
			j++;
			if (needle[i] == '\0' && i > 0)
				return (haystack);
			else if (needle[i] != haystack[j])
			{
				i = 0;
				j = 0;
				break;
			}
		}
	}
	return (NULL);
}
