#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * void - takes no argument
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
