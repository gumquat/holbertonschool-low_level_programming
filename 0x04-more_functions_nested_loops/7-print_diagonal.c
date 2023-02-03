/**
*print_diagonal - description HERE
*@n: variable description HERE
*Return: 0
*/

#include "main.h"

void print_diagonal(int n)
{
int i = 0;
int a = 0;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (a = 0; a < i; a++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
