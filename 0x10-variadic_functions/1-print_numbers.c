#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers passed thru
 *@seperator: string to print between the numbers 
 *@n: amount of numbers to be printed
 *Return: always 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;

	if (seperator == NULL)
	{
		printf("\n");
		return;
	}

	va_start(list, n);

	while (i < n)
	{
	/*printf here with a %d*/
	}

	printf(/*something...*/);

}
