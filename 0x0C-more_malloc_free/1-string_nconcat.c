/**
 *
 *
 *
 *
 *
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int s1Len, s2Len, bufferLen, index, index2 = 0;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1Len])
	{
		s1Len++;
	}
	while (s2[s2Len])
	{
		s2Len++
	}

	bufferLen = s1Len + s2Len;

	pointer = malloc((sizeof(char) * bufferLen) + 1);	

	if (pointer == NULL)
	{
	return (NULL)
	}	

	while (index < bufferLen)
	{
		if (index <= s1Len)
		{
			pointer[index] = s1[index];
		}
		if (index >= s1Len)
		{
			pointer[index] = s2[index2];
			index2++;
		}
	
		index++;
	}	
	pointer[index] = '\0';
	return (pointer);
}
