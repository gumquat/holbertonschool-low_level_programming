/**
 *main - prints number of arguments pass thru it
 *@argc: arguement counter
 *@argv: arguement vector
 *Return 0 as always
 */

#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{

int index;

for (index = 0; index < argc; index++;)
{
	printf("%s\n", argv[index]);
}
return (0);
}
