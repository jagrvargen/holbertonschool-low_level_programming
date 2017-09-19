#include "holberton.h"

void print_num(int k);

/**
 * print_times_table - prints times table of n between 0 and 15
 *
 * @n: takes a single integer as argument
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
			{
				k = i * j;
				print_num(k);
			}
		}
		_putchar('\n');
	}
}

/**
 * print_num - prints number to terminal
 *
 * @k: takes single integer as argument
 *
 * Return: void
 *
 */
void print_num(int k)
{
	if (k < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
	else if (k < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(k / 100 + '0');
		_putchar(k / 10 % 10 + '0');
		_putchar(k % 10 + '0');
	}
}
