#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers passed thru
 *@separator: string to print between the numbers
 *@n: amount of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);

	while (i < n - 1)
	{
		printf("%d", va_arg(list, int));

			if (separator != NULL)
			{
			printf("%s", separator);
			}
		i++;
	}

	printf("%d\n", va_arg(list, int));

}
