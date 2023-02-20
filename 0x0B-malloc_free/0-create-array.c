/**
 *create_array - creates an array of char and initializes with a specific char
 *@size: size of array
 *@c: string
 *Return: null if size = 0
 */

#include "main.h"
#include <stdio.h>

char *create_array(unsigned int size, char c)
{

unsigned int butt;
char *pointer;

if (size == 0)
	{
	return (NULL);
	}
/*this line sets pointer equal to the memory allocated to the string*/
pointer = malloc(size * sizeof(char));

for (index = 0; index < size; index++)
	{
		s[i] = c;		
	}	

return (pointer);

}
