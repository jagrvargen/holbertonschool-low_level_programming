#include "holberton.h"
int feed_num(int x, int n);

/**
 * is_prime_number - Returns 1 if input is prime, 0 otherwise
 *
 * @n: An integer value.
 *
 * Return: An integer value
 */
int is_prime_number(int n)
{
	return (feed_num(n, 2));
}

int feed_num(int n, int x)
{
	if (n <= 0 || n < 2)
		return (0);
	else if (n % x == 0)
		return (0);
	else if (n % x == 1)
		return (1);
	return (feed_num(n, x + 1));
}
