#include "variadic_functions.h"

/**
 *sum_them_all - function that returns all of its parameters added together
 *@n: integer
 *Return: 0 on failure
 */

int sum_them_all(const unsigned int n, ...)
{
	/*NOTE: n getting passed thru acts as our number of arguments*/

	/*initializes temporary variables*/
	va_list list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	/*sets where the variable length part of the argument list starts/ends*/
	va_start(list, n);

	/*loop thru each argument adding the int vlaues*/
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	/*cleen up*/
	va_end(list);

	return (sum);
}
