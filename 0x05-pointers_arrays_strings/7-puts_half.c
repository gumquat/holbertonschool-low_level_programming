/*
*
*
*
*/

#include "main.h"

void puts_half(char *str)
{

int i = 0;
int a;

while (str[i] != '\0')
{
a++;
}

if (i % 2 == 1)
{
a = (i - 1) / 2;
a += 1;
}
else
{
a = 1 / 2;
}

for (; a < i; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
