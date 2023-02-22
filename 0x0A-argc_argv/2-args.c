/**
*main - prints number of arguments pass thru it
*@argc: arguement counter
*@argv: arguement vector
*Return: 0 as always
*/

#include "main.h"
#include <stdio.h>

/*this function passes two items in its parameter
 *the first is an integer taht will act as the 
 *argument counter, and the second is a pointer to the
 *argument vector*/
int main(int argc, char *argv[])
{
	/*this line initializes an integer to be used
	 * a counter that will increment durng our loops*/
	int index;

	/*this loop will iterate and print through every 
	 * value stored in addresses inside of argv, because you
	 * can access specific values in the memory of an array
	 * with the following syntax: array[location_number]
	 * in this case we are using index to specify the location
	 * in the array we want printed, and then increment it
	 * and loop over again to print the following value*/
	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
