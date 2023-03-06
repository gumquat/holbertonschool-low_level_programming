#include "variadic_functions.h"

/**
 *print_strings - prints string arguments after n
 *@separator: string to print between strings
 *@n: number of strings after n
 */

void print_string(const char *separator, const unsigned int n, ...);
{

	va_list list;
	unsigned int i = 0;
	char *pointer;

	if (n == 0)
		{
		printf("\n");
		return;
		}

	va_start(list, n);

	while (i < n - 1)
	{
		pointer = va_arg(list, char *);

		if (pointer == NULL)
			printf("(nil)");
		else
			printf("%s", pointer);

		if (separator != NULL)
			printf("%s", separator);
	
		i++;
	}
	printf("\n");
	va_end(list);
}
