#include "holberton.h"

int count_digits(int i);
void print_num(int i, int divisor);

/**
 * print_to_98 - prints all numbers from n to 98
 *
 * @n: the parameter from which to start counting to 98
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	int i;
	int divisor;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			divisor = count_digits(i);
			print_num(i, divisor);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			divisor = count_digits(i);
			print_num(i, divisor);
		}
	}
}

/**
 * count_digits - counts digits in number and returns 10^count
 *
 * @i: First argument
 *
 * Return: int to be used as divisor
 *
 */
int count_digits(int i)
{
	int j;
	int count;
	int divisor;

	j = i; /* set j to i so that i remains unchanged */
	count = 0;
	while (j > 0)  /* Counts number of digits */
	{
		j /= 10;
		count++;
	}

	divisor = 1;
	while (count > 1) /* Calculates a divisor, if count is 1 return 1 */
	{
		divisor *= 10;
		count--;
	}

	return (divisor);
}

/**
 * print_num - prints numbers
 * @i: parameter to be printed
 * @divisor: used to extract digits from left side of int i.
 * Return: void
 */
void print_num(int i, int divisor)
{

	if (i == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else if (i >= 0)
	{
		for (; divisor > 1; divisor /= 10)
		{
			_putchar((i / divisor) + '0');
			i = i - (i / divisor * divisor);
		}
		_putchar(i % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('-');
		if (i >= -9)
		{
			_putchar(i % 10 * -1 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(i / 10 * -1 + '0');
			_putchar(i % 10 * -1 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
