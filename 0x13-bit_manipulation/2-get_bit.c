#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: An unsigned long integer value.
 * @index: An unsigned integer value.
 *
 * Return: An integer value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 32)
		return (-1);
	mask = 1;
	while (index--)
		mask <<= 1;
	if (mask & n)
		return (1);
	else if (!(mask & n))
		return (0);
	else
		return (-1);
}
