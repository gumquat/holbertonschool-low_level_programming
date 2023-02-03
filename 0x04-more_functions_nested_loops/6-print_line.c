/**
*print_line - description HERE
*@n: variable description HERE
*Return: always 0
*/

#include "main.h"

void print_line(int n)
{

int i = 0;

if (n > 0)
{
	while (i < n)
	{
		_putchar('_');
		i++;
	}

}
_putchar('\n');
}
