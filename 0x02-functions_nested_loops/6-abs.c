#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: takes an int as an argument.
 *
 * Return: absolute value of n.
 */
int _abs(int n)
{
	if (n >= 0)
		n = n;
	else
		n = 0 - n;
	return (n);
}
