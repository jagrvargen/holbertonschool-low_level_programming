#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * void - takes no arguments
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	long int i;
	long int j;
	unsigned int fib;
	long int sum;

	i = 1;
	j = 2;
	sum = 2;
	while (fib < 4000000)
	{
		if (i < j)
		{
			fib = i + j;
			if (fib % 2 == 0)
				sum += fib;
			i += j;
		}
		else
		{
			fib = i + j;
			if (fib % 2 == 0)
				sum += fib;
			j += i;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
