#include "main.c"
/**
 *print_name - function that prints a name
 *@name: name to be printed
 *@f: function pointer to a function that takes a character pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
