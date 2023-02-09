/**
*_strcmp - compares two strings
*@s1: container of string 1
*@s2: container of string 2
*Return: 0 if the string are the same
*/

#include "holberton.h"

int _strcmp(char *s1, char *s2);
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2)
}
