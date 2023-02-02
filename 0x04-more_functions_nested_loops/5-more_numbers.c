/**
*more_numbers - description HERE
*Return: 0
*/

#include "main.h"

void more_numbers(void)
{

int i = 0;
int n = 0;
	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
			n++;
		}
		_putchar('\n');
	}
}
