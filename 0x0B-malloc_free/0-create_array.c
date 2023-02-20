/**
 *create_array - creates an array of char and initializes with a specific char
 *@size: size of array
 *@c: char to fill in the array
 *Return: null if size = 0
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{

unsigned int index;
char *pointer;

pointer = malloc(size * sizeof(char));

if (size == 0)
	{
	return (NULL);
	}

if (pointer == 0)
	{
	return (NULL);
	}

for (index = 0; index < size; index++)
	{
	pointer[index] = c;
	}

return (pointer);

}
