/**
 *main - prints function name
 *@argc: arguement counters
 *@argv: arguement vector
 *Return: always nothin
 */

#include "main.h"
#include <stdio.h>

void main (int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
