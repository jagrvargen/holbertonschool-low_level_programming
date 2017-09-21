#include "holberton.h"

/**
 * _isdigit - checks if argument is ascii char 0 - 9
 *
 * @c: single integer argument
 *
 * Return: 1 if true, 0 if false.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
