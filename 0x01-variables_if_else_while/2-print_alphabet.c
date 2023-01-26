/**
*main - PUT DESCRIPTION HERE
*Return: main always 0
*/
#include <stdio.h>
#include <string.h>

int main (void)
{
char i;
while (i <= 'z')
{
i = tolower(i);
putchar(i);
i++;
}
return (0);
}
