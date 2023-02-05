/**
*print_rev - puts a string into data storage, then prints it backwards
*@s: string variable
*Return: nothing
*/

#include "main.h"

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	i++;
}
for (i -= 1; i >= 0; i--)
{
	_putchar(s[i]);
}
	_putchar('\n');
}
