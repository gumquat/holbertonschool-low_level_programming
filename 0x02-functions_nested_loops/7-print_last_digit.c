/**
*print_last_digit - print the last digit of an integer
*@i: is a variable
*Return: something lol
*/

#include "main.h"

int print_last_digit(int i)
{
	int LastDigit = i % 10;

	if (i < 0)
	{
		LastDigit = LastDigit * -1;
	}
	_putchar(LastDigit + '0');
	return (LastDigit);
}
