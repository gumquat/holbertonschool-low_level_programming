#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an arr of
 * ints using the Linear search algorithm
 *
 * @array: pointer to the first element of the arr to search in
 * @size: number of elements in `array`
 * @value: the value to search for
 * Return: -1 if `value` is not present or if `array` is NULL; else returns
 * the index where the value was found.
 * Description: struct skiplist_s
 */
int linear_search(int *array, size_t size, int value)
{
int i;

if (!array)
{
return (-1);
}

for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
