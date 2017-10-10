#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: A pointer to a string.
 *
 * Return: A pointer to a string.
 */
char *_strdup(char *str)
{
	char *pstr;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0';)
		len++;
	pstr = malloc(len * sizeof(char));
	len = 0;
	while (str[len] != '\0')
	{
		pstr[len] = str[len];
		len++;
	}
	pstr[len] = '\0';
	str = pstr;
	return (str);
}
