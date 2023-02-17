/**
 *main - multiplies two numbers pulled from argv
 *@argc: arguement counter
 *@argv: arguement vector
 *Return: itsaaa me, 0
 */

#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{

int var1, var2 = 0;
int sum = 0;

if (argc < 3)
{
	printf("Error\n");
	return (1);
}
else
{

	var1 = atoi(argv[1]);
	var2 = atoi(argv[2]);
	sum = var1 * var2;
	printf("%d\n", sum);
}

return (0);
}
