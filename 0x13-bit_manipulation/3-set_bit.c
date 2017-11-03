#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * @n: A pointer to an unsigned long integer.
 * @index: An unsigned integer value.
 *
 * Return: An integer value.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 32)
		return (-1);
	mask = 1;
	while (index--)
		mask <<= 1;
	*n |= mask;
	if (n)
		return (1);
	return (-1);
}
