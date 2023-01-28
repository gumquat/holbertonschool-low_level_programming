#include "main.h"
/**
*main - PUT DESCRIPTION HERE
*Return: main always 0
*/
int main(void)
{
int i = 0;
char letter = 'a';
while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
i++;
return (0);
}
