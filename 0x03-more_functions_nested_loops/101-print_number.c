#include "holberton.h"

/**
 * print_number - prints an integer using _putchar
 *
 * @n: takes an integer as an argument
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		print_number(n / 10);
	}
	else if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
