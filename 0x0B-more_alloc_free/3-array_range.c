#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers which containes all values from
 * min to max.
 *
 * @min: An integer value.
 * @max: An integer value.
 *
 * Return: A pointer to an array of integers.
 */
int *array_range(int min, int max)
{
	int *pointer;
	int range;
	int i;

	if (min > max)
		return (NULL);
	for (range = min; range <= max;)
		range++;
	pointer = malloc(sizeof(int) * range);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		pointer[i] = min;
		min++;
	}
	return (pointer);
}
