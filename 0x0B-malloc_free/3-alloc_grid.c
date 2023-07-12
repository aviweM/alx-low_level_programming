#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - Returns a pointer to 2 dimensional array of integers
  * @width: column integer
  * @height: row integer
  *
  * Return: 1 or 0 if the integers are negative
  */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(p[j]);
			}

			free(p);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			p[k][l] = 0;
		}
	}

	return (p);
}
