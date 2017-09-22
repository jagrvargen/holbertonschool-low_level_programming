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
	unsigned int x;
	int counter;
	int divisor;
	unsigned int num;

	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	x = num;
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
		_putchar(num / divisor % 10 + '0');
		divisor /= 10;
	}
}
