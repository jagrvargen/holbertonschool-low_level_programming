#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 *
 * @n: the starting point of the count
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
}
