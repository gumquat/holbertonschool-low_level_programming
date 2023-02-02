/**
*print_numbers - PUT DESCRIPTION HERE
*@i: is a variable
*Return: nothin
*/

#include "main.h"

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ( i != 2 && i != 4)
		_putchar(i + '0');
	}
	_putchar('\n');
}
