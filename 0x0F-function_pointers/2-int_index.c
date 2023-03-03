#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: integer array to search
 *@size: number of elements in array
 *@cmp: function pointer that returns an int and takes an int
 *Return: -1 on failure or size of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
