/**
*main - print alphabet 10 times
*Return: void
*/
#include "main.h"
int print_alphabet_x10(void)
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
