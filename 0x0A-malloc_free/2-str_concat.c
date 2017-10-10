#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: A pointer to a string.
 * @s2: A pointer to a string.
 *
 * Return: A pointer to a string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	char *ps;

	i = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2) + len1;
	ps = malloc((len1 + len2 + 2) * sizeof(*ps));
	while (i < len1)
	{
		ps[i] = s1[i];
		i++;
	}
	len1 = 0;
	while (i < len2)
	{
		ps[i] = s2[len1];
		i++;
		len1++;
	}
	ps[i] = '\0';
	return (ps);
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: Takes a pointer to a char as a parameter.
 *
 * Return: returns an integer.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0';)
		i++;
	return (i);
}
