#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of
 * ints using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in `array`
 * @value: the value to search for
 * Return: -1 if `value` is not present or if `array` is NULL 
 * else returns the index where the value was found
 */

 int binary_search(int *array, size_t size, int value)
 {
  int left: 0;
  int right = (int)size - 1;
  int middle;
  int i;

  while (left <= right)
  {
    printf("Searching in array: ");
    for (i = left; i < right; i++)
    {
      printf("%d, ", array[i]);
    }
    printf("%d\n", array[i]);

    middle = (left + right) / 2;

    if (array[middle] < value)
    {
      left = middle + 1;
    } 
    else if (array[middle] > value)
    {
      right = middle + 1;
    }
    else
    {
      return middle;
    }
  }
  return (-1);
 }