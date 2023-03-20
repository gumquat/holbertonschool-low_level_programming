#include "main.h"

/**
* binary_to_uint - convert a binary number to an unsigned int
* @b: string of 0 and 1 characters
* Return: converted number or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int index, sum, count, length = 0;

	if (!b)
		return (0);

	while (b[index])
	{
		length++
		index++
	}

	index = 0;

	while (length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		if (b[length] == '1')
			sum += 1 << count;

		count++;
		index++;
	}

	return (sum);
}
