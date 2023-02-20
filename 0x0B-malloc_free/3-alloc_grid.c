/**
*alloc_grid - pointer to a pointer.
*@width: width of array
*@height: height of the array
*Return: returns a pointer ro a 2 dimensional array of integers
*/

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **a;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);

		if (a[b] == NULL)
		{
			for (c = b; c >= 0; c--)
			{
				free(a[c]);
			}

			free(a);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
		{
			a[d][e] = 0;
		}
	}

	return (a);
}
