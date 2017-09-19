#include "holberton.h"

/**
 * _islower - a function that checks if a character is lower case/
 *
 * @c: takes a char as an argument.
 *
 * Return: 1 if lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
