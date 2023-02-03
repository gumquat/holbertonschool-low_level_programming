/**
*print_line - description HERE
*@n variable description HERE
*Return: 0
*/

#include "main.h"

void print_line(void)
{

	int n;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
	for (; n > 0; n++)
		{
		_putchar('_');
		}
	_putchar('\n');
	}
}
