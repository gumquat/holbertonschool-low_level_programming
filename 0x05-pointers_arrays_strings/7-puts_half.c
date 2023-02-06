/*
*puts_half - prints last half of a string
*@len: integer
*Return: nothing
*/

#include "main.h"

void puts_half(char *str)
{

int i = 0;
int len;

while (str[i] != '\0')
{
len++;
}

if (i % 2 == 0)
{
len = i / 2;
}
else
{
len = (i - 1) / 2;
}

for (; len < i; len++)
{
_putchar(str[len]);
_putchar('\n');
}
}
