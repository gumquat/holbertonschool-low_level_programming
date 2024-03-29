#include "main.h"

/**
 *get_bit - returns the value of a bit at a certain index
 *@n: number
 *@index: the indexed location
 *Return: value or -1 on FAILURE
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n <= 1)
		return (n % 2);

	while (n >= 1)
	{
		if (i >= index)
			break;
		n = n / 2;
		i++;
	}

	if (index > i && index < sizeof(long int) * 8)
		return (0);

	if (index > sizeof(long int) * 8)
		return (-1);

	return (n % 2);
}
