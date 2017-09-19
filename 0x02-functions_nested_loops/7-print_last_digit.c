#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: takes an integer as an argument
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
		j *= -1;
	_putchar(j + '0');
	return (j);
}
