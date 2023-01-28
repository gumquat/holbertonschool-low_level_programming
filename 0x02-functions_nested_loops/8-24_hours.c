/**
*main - makes a whole ass clock 
*@a: hours of ten digits
*@b: hours of single digits
*@c: minutes of ten digits
*@d: minutes of single digits
*Return: something
*/

#include "main.h"

int main(void)
{

for (a = 0; a <= 2; a++)
{
	for (b = 0; b <= 9; b++)
		{
		if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
		{
			for (c = 0; c <= 5; c++)
				{
				for (d = 0; d <= 9; d++)
				}
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(c + '0');
			_putchar(d + '0');
		}
		}
}
}
}
