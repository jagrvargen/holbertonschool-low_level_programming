#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 *
 * @x: An integer value as base of power.
 * @y: An integer value to raise x to.
 *
 * Return: An integer value.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
