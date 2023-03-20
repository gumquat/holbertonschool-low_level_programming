#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number
* @index: location
* Return: 1 good -1 bad
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(long) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
