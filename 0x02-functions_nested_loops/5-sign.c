/**
*print_sign - description HERE
*@i: description
*Return: 0 or 1 or -1 
*/

#include "main.h"

int print_sign(int i)
{
if (n > 0) 
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (1);
}
else 
{
_putchar ('0');
return (0);
}
}
