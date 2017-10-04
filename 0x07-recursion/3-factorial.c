#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: An integer value
 *
 * Return: An integer
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
