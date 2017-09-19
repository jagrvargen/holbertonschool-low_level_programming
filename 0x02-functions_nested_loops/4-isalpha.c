#include "holberton.h"

/**
 * _isalpha - checks if a character is alphabetical
 *
 * @c: a single character
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
