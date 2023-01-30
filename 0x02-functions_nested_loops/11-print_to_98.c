/**
*print_to_98 -prints from 0 to 98
*@n: variable
*Return: something
*/

#include "main.h"

void print_to_98(int n)
{
if (n <= 98)
{
	for (; n <= 98; n++)
	{
		_putchar("%d", n);
		_putchar("\n");
		break;
	}
	else
	{
		_putchar("%d, ", n);
	}
}
}
else 
{
	for (; n >= 98; n--)
	{
		if (n ==98)
		{
			_putchar("%d", n);
			_putchar("\n");
			break;
		}
		else
		{
			_putchar("%d, ", n);
		}
	}
}

}
