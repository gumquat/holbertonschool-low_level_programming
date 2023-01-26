/**
*main - PUT DESCRIPTION HERE
*Return: main always 0
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
int x;
for (x = 48; x < 58; x++)
{
putchar(x);
if (x < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
