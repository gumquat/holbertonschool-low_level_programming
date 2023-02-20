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

/*sets pointer equal to memory value allocated to the string*/
pointer = malloc(size * sizeof(char));

/*if size is 0 return NULL*/
if (size == 0)
	{
	return (NULL);
	}

/*this creates an array of characters by passing the c from the parameter
 * into an array called index*/
for (index = 0; index < size; index++)
	{
	pointer[index] = c;
	}

return (pointer);

}
