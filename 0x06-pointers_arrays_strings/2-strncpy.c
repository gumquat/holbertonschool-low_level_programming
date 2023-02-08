/**
*_strncpy - copies a string
*@dest: buffer zone for putting a string copy
*@src: source of the string needed to be copied
*@n: maximum bytes allowed to be copied
*Return: a pointer to the new string
*/

#include "holberton.h"

char *_strncpy(char *dest, char *src, int n)
{

	int index = 0;
	int src_len = 0;

	while (src[index])
	{
	index++;
	src_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
	dest[index] = src[index];
	}

	for (index = src_len; index < n; index++)
	{
	dest[index] = '\0';
	}

return (dest);
}
