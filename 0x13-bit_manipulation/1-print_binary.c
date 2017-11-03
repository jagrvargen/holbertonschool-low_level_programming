#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: An unsigned long integer.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask << 1 != 0 )
		mask <<= 1;
	while (mask > 0)
	{
		if (mask & n)
		{
			while (mask > 0)
			{
				if (mask & n)
					_putchar('1');
				else
					_putchar('0');
				mask >>= 1;
			}
		}
		mask >>= 1;
	}
}
