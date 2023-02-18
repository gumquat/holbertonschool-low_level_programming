/**
 *main - adds two numbers 
 *@argc: arguement counter
 *@argv: arguement vector
 *Return: 0 as usual
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

int index;
int var = 0;
int sum = 0;

	for (index = 1; i < argc; index++)
	{
		for (var = 0; argv[index][var]; d++)
		{
			if (argv[index][variable] < '0' || argv[index][var] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
