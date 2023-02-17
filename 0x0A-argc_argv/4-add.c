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
int var1 = 0;
int var2 = 0;
int sum = 0;

	if (argc < 1 || /*contains no number*/)
	{
	printf("0\n");
	}
	else
	{
		for (index = 0; index < argc; index++;)
		{
			if (argv[index] < 48 || argc[index] > 57)
			{
				printf("Error\n");
				return (1);
			}			
		sum += atoi(argv[index]);
		}
	}
printf("%d\n", sum);
return (0);
}
