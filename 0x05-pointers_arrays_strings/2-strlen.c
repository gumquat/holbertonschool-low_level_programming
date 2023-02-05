/**
*_strlen - returns length of a string pointed to
*@s: oh yeah baby the letter s 
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
