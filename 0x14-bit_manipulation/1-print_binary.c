#include "main.h"

/**
* print_binary - prints binary
* @n: number to convert and and then print as binary
* Return: badabingy badaboomdy
*/
void print_binary(unsigned long int n)
{
	if (n >> 1 == 0)
	{
		_putchar(n - 2 * (n >> 1) + '0');
		return;
	}

	print_binary(n >> 1);

	_putchar(n - 2 * (n >> 1) + '0');
}
