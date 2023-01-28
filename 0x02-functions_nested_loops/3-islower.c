/**
*_islower - checks for lowercase
*@c: i is an ascii character
*Return: true if lowercase
*/

#include "main.h"

int _islower(int i)
{
if (i >= 'a' && i <= 'z')
{
return (1);
}
else
{
return (0);
}
}
