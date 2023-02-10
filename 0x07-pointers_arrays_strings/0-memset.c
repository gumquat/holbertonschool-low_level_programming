/**
*_memset - fills memory with a constant byte
*@s: string thats pointed to
*@b: string
*@n: variable thats unassaigned
*Return: pointer to new filled memory
*/

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
