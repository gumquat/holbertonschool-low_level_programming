/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer
 *@i: integer
 *Return: sum
 */

#include "main.h"
#include <stdio.h>

/*prototypes on line below*/
int _sqrt(int n, int i);



int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));

}

int _sqrt(int n, int i)
{

	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));

}
