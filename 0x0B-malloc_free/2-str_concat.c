/**
*str_concat - Concatenates two strings of any size
*@s1: the first string
*@s2: the second string
*Return: the two strings together
*/

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	s = malloc((sizeof(char) * d) + 1);

	if (s == NULL)
		return (NULL);

	while (c < d)
	{
		if (c <= a)
			s[c] = s1[c];
		if (c >= a)
		{
			s[c] = s2[e];
			e++;
		}
		c++;
	}

	s[c] = '\0';
	return (s);
}
