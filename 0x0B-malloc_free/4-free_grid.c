/**
*free_grid - frees a 2 dimensional grid 
*@grid: the grid space
*@height: height of the grid
*Return: nothin
*/

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

