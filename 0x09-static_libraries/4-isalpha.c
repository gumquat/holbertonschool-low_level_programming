/**
*_isalpha - checks for alphabet character C
*@i: is a thing
*Return: true if is letter
*/
#include "main.h"
int _isalpha(int i)
{
if (i >= 'a' && i <= 'z')
{
	return (1);
}

else if (i >= 'A' && i <= 'Z')
{
	return (1);
}

else
{
	return (0);
}

}
