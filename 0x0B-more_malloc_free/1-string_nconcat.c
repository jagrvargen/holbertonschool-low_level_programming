#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);

/**
 * string_nconcat - Concatenates two strings. s2 can be up to n bytes in length
 *
 * @s1: A pointer to a string.
 * @s2: A pointer to a string.
 * @n: An unsigned integer.
 *
 * Return: A pointer to a string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	int i;
	unsigned int j;
	unsigned int len;

	if (n <= (unsigned int) _strlen(s2))
		len = _strlen(s1) + n + 1;
	else if (n > (unsigned int) _strlen(s2))
		len = _strlen(s1) + _strlen(s2) + 1;
	point = malloc(sizeof (char) * len);
	if (point == NULL)
		return (NULL);
	for (i = 0; (unsigned int) i < len; i++)
		point[i] = '0';
	for (i = 0; s1[i] != '\0'; i++)
		point[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		point[i] = s2[j];
		i++;
	}
	point[i] = '\0';
	return (point);
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

        for (i = 0; s[i] != '\0';)
		i++;
	if (s == NULL)
		i = 0;
        return (i);
}
