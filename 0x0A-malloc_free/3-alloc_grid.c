#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: An integer value.
 * @height: An integer value.
 *
 * Return: A pointer to an array of integers.
 *
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int*));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
