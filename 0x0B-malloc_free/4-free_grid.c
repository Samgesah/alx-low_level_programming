#include "main.h"
#include <stdlib.h>
/**
  *free_grid - function to free memory
  *@grid: 2d array
  *@height: int type
  *Return: free up memory
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

