#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 *
 * @b: A pointer to a string.
 *
 * Return: An unsigned integer value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base_2, total;
	int len;

	if (b == NULL)
		return (0);
	total = 0;
	base_2 = 1;
	for (len = 0; b[len] != '\0';)
		len++;
	while (len > 0)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			total += base_2;
		base_2 *= 2;
		len--;
	}
	return (total);
}
