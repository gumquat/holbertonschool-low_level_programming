/*
*puts_half - prints last half of a string
*@i: integer
*Return: nothing
*/

#include "main.h"

void puts_half(char *str)
{

int i = 0;
int length;

while (str[i] != '\0')
{
length++;
}

if (i % 2 == 0)
{
length = i /2;
}
else
{
length = (i - 1) / 2;
length += 1;
}

for (; length < i; length++)
{
_putchar(str[length]);
}
_putchar('\n');
}
