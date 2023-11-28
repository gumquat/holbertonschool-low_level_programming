#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - func searches for a value in an array of
 * ints...
 * ...uses the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in `array`
 * @value: the value to search for
 * Return: -1 if `value` is not present or if `array` is NULL; 
 * else returns; index where the value was found
 */

int linear_search(int *array, size_t size, int value) {
  if (array == NULL) {
      return -1;
  }
  for (i = 0; i < size; i++) {
      printf("Current value: %d, Looking for: %d\n", array[i], value);
      if (array[i] == value) {
      }
  }
  return -1;
}
