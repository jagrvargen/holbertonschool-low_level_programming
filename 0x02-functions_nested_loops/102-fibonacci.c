#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * void - takes no arguments
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i;
	long int j;
	long int k;
	long int fib;

	j = 1;
	k = 2;
	printf("%ld, ", j);
	printf("%ld, ", k);
	for (i = 0; i < 46; i++)
	{
		fib = j + k;
		printf("%ld, ", fib);
		if (j < k)
			j += k;
		else
			k += j;
	}
	printf("%ld\n", j + k);
	return (0);
}
