/**
*cap_string - capitalizes the first letter of words
*@str: the string to be capitalized
*Return: the newly capitalized string
*/

char *cap_string( char *str)
{

int index = 0;

while (str[index])
{
	while(!(str[index] >= 'a' && str[index] <= 'z'))
	{

	if (str[index - 1] == ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' || index == 0)
	str[index] -= 32;
	index++;
	}
}
	return (str);
}
