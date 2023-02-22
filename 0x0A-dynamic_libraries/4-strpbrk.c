/**
*_strpbrk - searches a string for any of a set of bytes
*@s: input
*@accept: input
*Return: pointer to s taht matches bytes in accept
*/

#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
			return (s + i);
			}
		}
	}
return (0);
}
