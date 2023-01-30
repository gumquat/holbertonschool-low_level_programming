/**
*print_to_98 -prints from 0 to 98
*@n: variable
*Return: something
*/
#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
if (n <= 98)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		printf("\n");
	}
	else
	{
		printf("%d, ", n);
	}
}
}
else 
{
	for (; n >= 98; n--)
	{
		if (n ==98)
		{
			printf("%d", n);
			printf("\n");
		}
		else
		{
			printf("\n");
		}
	}
}
