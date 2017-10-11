#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid.
 *
 * @grid: A pointer to an array of pointers.
 * @height: An integer value.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	height--;
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
