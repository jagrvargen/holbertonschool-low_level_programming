#include "holberton.h"

void print_number(int n)
{
	if (n < 0)
	{
		n =- n;
		_putchar('-');
		print_number(n / 10);
	}
	else if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
