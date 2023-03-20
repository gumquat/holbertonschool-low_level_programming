#include "main.h"

/**
*binary_to_uint - convert a binary number to an unsigned int
*@b: string of 0 and 1 characters
*Return: converted number or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int index, sum = 0;

	ib (!b)
		return (0);

	while (b[index])
	{
		if (b[index] != '1' && b[index] != '0')
			return (0);

		if (b[index] == '1')
			sum = ((2 * sum) + 1);
		else if (b[index] == '0')
			sum = sum * 2;

		index++;
	}
	return (sum);
}
