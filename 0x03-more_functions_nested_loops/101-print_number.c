#include "holberton.h"
#include <stdio.h>

/**
 * print_number - prints an integer using _putchar
 *
 * @n: takes a single integer as an argument
 *
 * Return: void
 */
void print_number(int n)
{
	int x;
	int counter;
	int divisor;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	else if (n == 0)
		_putchar('0');

	x = n;
	counter = 0;
	while (x > 0)
	{
		x /= 10;
		++counter;
	}
	divisor = 1;
	while (counter > 1)
	{
		divisor *= 10;
		counter--;
	}
	while (divisor > 0)
	{
		_putchar(n / divisor % 10 + '0');
		divisor /= 10;
	}
}
