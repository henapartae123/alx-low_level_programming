#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or NULL
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
