/**
*puts_half - prints last half of a string
*@str: striiiing
*Return: nothing
*/

#include "main.h"

void puts_half(char *str)
{
int len = 0;
char *y = str;
int a;

while (*y != '\0')
{
y++;
len++;
}

if (len % 2 == 0)
{
a = (len + 1) / 2;
}

for (; a < len; a++)
{
	_putchar(str[n]);
}
_putchar('\n');
}
