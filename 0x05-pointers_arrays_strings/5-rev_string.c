/**
*rev_string - reverse a string in storage
*@s: a string ayoooo woohoo beep beep
*Return: my mind has melted uh oh
*/

#include "main.h"

void rev_string(char *s)
{
int length = 0;
int index = 0;
char temp;

while (s[index++])
{
	length++;
}
	for (index = length - 1; index >= length / 2; index--)
	{
	temp = s[index];
	s[index] = s[length - index - 1];
	s[length - index - 1] = temp;
	}
}
