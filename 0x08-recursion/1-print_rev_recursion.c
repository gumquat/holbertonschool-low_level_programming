/**
 *print_rev_recursion - prints string in reverse
 *@s: string getting passed thru
 *Return: Silly little string haha reverse reverse!
 */

#include "main.h"

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);

}
