#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i, j;
	unsigned int len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n <= 0)
		return (s1);
	else if (len2 < n)
		n = (unsigned int) _strlen(s2);
	pointer = malloc(sizeof(char) * (len1 + n + 1));
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		pointer[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		pointer[i] = s2[j];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
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

	if (s == NULL)
		i = 0;
	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}
