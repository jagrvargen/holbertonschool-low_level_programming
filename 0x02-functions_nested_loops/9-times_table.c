#include "holberton.h"

/**
 * times_table - calculates the values of a 9 times table
 *
 * void - takes no argument
 * @j: First operand
 * @k: Second operand
 * Return: returns no value
 */
void print_table(int j, int k);

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			print_table(j, k);
		}
		_putchar('\n');
	}
}

/**
 *  print_table - prints the times table in grid format
 *
 * @j: First operand
 *
 * @k: Second operand
 *
 * Return: void
 */
void print_table(int j, int k)
{
	if (j == 0)
		_putchar('0');
	else if (k < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}
}
