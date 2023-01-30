/**
*functionnameHERE - description HERE
*Return: something
*/

#include "main.h"

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{	
_putchar(n + '0');
_putchar('\n');
}
else
{
_putchar(n + ' ,');
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
_putchar(n + '0');
_putchar('\n');
}
else
{

_putchar(n + ' ,');
}
}
}
}
}
return (0);
}
