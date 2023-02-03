/**
*print_triangle - description HERE
*@size: variable description HERE
*/

#include "main.h"

void print_triangle(int size)
{

int i;
int a;

if (size > 0)
{
	i = 0;
	while (i < size)
	{
		a = size - 1;
		while (a > i)
		{
		_putchar(' ');
		a--;
		}
			a = 0;
			while (a < i + 1)
			{
			_putchar('#');
			a++;
			}
	_putchar('\n');
	i++;
	}
}
else
{
_putchar('\n');
}
}
