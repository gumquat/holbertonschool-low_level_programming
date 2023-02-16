/**
*_isupper - checks if upper case
*@c: variable
*Return: 1 if upper case
*/

#include "main.h"

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
