#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to an area of memory.
 * @b: Constant byte.
 * @n: Unsigned integer denoting length of memory area.
 *
 * Return: A pointer to memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
