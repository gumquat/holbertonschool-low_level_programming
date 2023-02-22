/**
 *main - prints function name
 *@argc: arguement counters
 *@argv: arguement vector
 *Return: always nothin
 */

#include "main.h"
#include <stdio.h>

/*this function passes two items in its parameter
 *the first is an integer that will act as the
 *argument counter, and the second is a pointer to the
 *argument vector */
int main(int argc, char *argv[])
{
	/*this void call makes the fuction ignore an error*/
	(void) argc;
	/*this line will print the STRING pointed to by argv
	 *you'll notice that it states argv[0], as it only needs
	 *the address of the first 'spot' in the string to know
	 *the size and addresses of the entire string when called*/
	printf("%s\n", argv[0]);
	return (0);
}
