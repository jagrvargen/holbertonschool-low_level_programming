#include "holberton.h"

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
	int len;

	for (i = 0; *(s + i) != '\0'; i++)
		len++;
	return (len);
}
