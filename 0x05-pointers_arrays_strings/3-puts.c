/**
*_puts - prints strong from pointed location
*@str: itsa striiing
*Return: nothing
*/

#include "main.h"

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
