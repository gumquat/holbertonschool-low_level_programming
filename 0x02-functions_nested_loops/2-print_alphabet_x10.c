#include "main.h"

/**
 *  * print_alphabet_x10 - print alphabet 10 times
 *   *
 *    * Return: void
 *     */

void print_alphabet_x10(void)
{
int i = 0;
char letter = 'a';
while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
