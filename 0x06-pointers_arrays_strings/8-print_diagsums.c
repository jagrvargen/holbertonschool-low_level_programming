#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *
 * @a: A pointer to an array of integers.
 * @size: A integer denoting size of matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int *rows;
	int columns;
	int i;
	int sum;

	rows = &*a;
	columns = 0;
	for (i = 0; i < size * size; i += size)
	{
		sum += *(rows + columns);
		rows += size;
		columns++;
	}
	printf("%d, ", sum);
	sum = 0;
	rows = &*a;
	columns--;
	for (i = 0; i < size * size; i += size)
	{
		sum += *(rows + columns);
		rows += size;
		columns--;
	}
	printf("%d\n", sum);
}
