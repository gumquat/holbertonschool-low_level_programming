#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a certain index
* @n: number
* @index: bitthat needs a change
* Return: success on 1 failure on -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(long) * 8)
			return (-1);

	*n = (1 << (unsigned long)index) | *n;
			return (1);
}

