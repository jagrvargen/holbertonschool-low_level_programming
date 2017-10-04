#include "holberton.h"

int test_root(int r, int n);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: An integer value.
 *
 * Return: An integer value.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (test_root(0, n));
}

int test_root(int r, int n)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (test_root(r + 1, n));
}
