/*malloc_checked - allocated memory so long as there is enough*/
/*@b: the size of memory to allocate*/
/*Return: zilch*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{

/*this line makes a pointer with no data type*/
	void *pointer;

/*this line sets the value of the pointer to a*/
/* newly allocated (malloc'd) spot in memory that is*/
/* the size of the integer b*/
pointer = malloc(b);

/*this checks if the pointer is NULL*/
/* and if it is exit's with a status value of 98*/
if (pointer == NULL)
	exit(98);

return (pointer);

}
