/**
*_strlen - returns length of a string pointed to
*@i: gonna hold that length
*Return: something
*/

#include "main.h"

int _strlen (char *s)
{
int i = 0;

while (s[i] != '/0')
{
i++;
}

return (i);
}
