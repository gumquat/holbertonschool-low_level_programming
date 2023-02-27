/**
 *array_range - range of the array
 *@min: the min
 *@max: the max
 *Return: ayyyoooooooooooo
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int *array_range(int min, int max)
{
	int index = 0;
	int *pointer = 0;

	if (min > max) 
		return (NULL);
	
	pointer = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (pointer == NULL)
		return (NULL);

	while(min <= max)
	{
	pointer[index] = min;
	index++;
	min++;
	}

	return (pointer);

}
