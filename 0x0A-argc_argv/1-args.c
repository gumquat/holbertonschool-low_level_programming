/**
 *main - prints number of arguments passed to it
 *@argc: arg counter
 *@argv: arg vector
 *Return: always nothin
 */

#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	/*this first line makes the function ignore an error*/
	(void) argv;
	/*this line shows that 
	 *
	 */
	printf("%d\n", argc - 1);
	return (0);
}
