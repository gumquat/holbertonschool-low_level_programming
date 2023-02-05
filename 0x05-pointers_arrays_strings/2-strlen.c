/**
*_strlen - returns length of a string pointed to
*@length: gonna hold that length
*Return: something
*/

#include "main.h"

int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

return (length);
}
