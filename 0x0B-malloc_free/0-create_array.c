/**
 *create_array - creates an array of char and initializes with a specific char
 *@size: size of array
 *@c: char to fill in the array
 *Return: null if size = 0
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*this parameter passes two arguments, 
 * a unsigned int (can only be a positive number)
 * and a character variable called c*/
char *create_array(unsigned int size, char c)
{

	/*initializes two variables
	 *an unsigned int (can only be pisitive integer)
	 and a pointer of char type*/
unsigned int index;
char *pointer;

/*sets the value of pointer to a newly allocated 
 * space in memory (malloc does that part) that is
 * set equal to the value passed by size 
 * multiplied by the sizeof (or number of bytes)
 * of the char type*/
pointer = malloc(size * sizeof(char));

/*the follwing checks do the following:
 * IF there is no space to allocate the memory (aka 0) 
 * then it returns NULL
 * IF the pointer cannot find an address to 'call dibs' 
 * on a block of memory, the it returns NULL
 */
/*the foor loop creates an array in that allocated
 * memory and then fills it with the character
 * passed thru char c in the parameter*/
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
/*return the value of the pointer*/
return (pointer);

}
