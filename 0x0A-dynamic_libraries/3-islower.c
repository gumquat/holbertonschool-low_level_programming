/**
*_islower - checks for lowercase
*@i: i is an ascii character
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
