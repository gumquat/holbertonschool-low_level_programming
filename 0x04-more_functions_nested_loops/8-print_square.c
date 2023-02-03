/**
*print_square - description HERE
*@i: variable description HERE
*@size: size of square
*Return: 0
*/

#include "main.h"

void print_square(int size)
{
int i = 0;
int a = 0;

if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size; a++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}
else
_putchar('\n');
}
