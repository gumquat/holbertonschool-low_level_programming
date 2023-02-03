/**
*print_line - description HERE
*@n: variable description HERE
*Return: 0
*/

#include "main.h"

void print_line(int n)
{

int i = 0;
char line '_';

if (n > 0)
{
	while (i < n)
	{
		_putchar(line);
		i++;
	}

}
_putchar('\n');
}
