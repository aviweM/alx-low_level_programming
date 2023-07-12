
#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees a 2 dmensional array
  * @grid: width of the grid
  * @height: height of the grid
  *
  * Return: Always 0
  */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);
}
