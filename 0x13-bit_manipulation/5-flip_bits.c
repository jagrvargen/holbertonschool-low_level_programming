#include "holberton.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one
 * number to another.
 *
 * @n: A unsigned long integer value.
 * @m: An unsigned long integer value.
 *
 * Return: An unsigned integer value.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total;
	unsigned long int mask;
	unsigned long int xor;

	total = 0;
	mask = 1;
	xor = (n ^ m);
	while ((mask << 1) != 0)
	{
		if (mask & xor)
			total++;
		mask <<= 1;
	}
	return (total);
}
