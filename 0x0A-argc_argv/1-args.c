/**
 *main - prints number of arguments passed to it
 *@argc: arg counter
 *@argv: arg vector
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
	/*this first line makes the function ignore an error*/
	(void) argv;
	/*this line will print 
	 *
	 */
	printf("%d\n", argc - 1);
	return (0);
}
