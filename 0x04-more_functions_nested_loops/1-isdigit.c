/**
*_isdigit - checks for digit
*@c: c is a variable that holds numbers
*Return: 1 if digit
*/
#include "main.h"

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
