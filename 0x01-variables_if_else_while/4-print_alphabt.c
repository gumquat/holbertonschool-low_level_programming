/**
*main - WORDS
*Return: 0 always
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
{
}
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}
