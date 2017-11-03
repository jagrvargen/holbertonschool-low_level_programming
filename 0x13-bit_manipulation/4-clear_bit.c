#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: A pointer to an unsigned long integer value.
 * @index: An unsigned integer value.
 *
 * Return: An integer value.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	if (n == NULL)
		return (-1);
	mask = 1;
	while (index--)
		mask <<= 1;
	*n &= ~mask;
	return (1);
}
