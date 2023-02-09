/**
*
*
*
*/

char *cap_string( char *str)
{

int index = 0;

while (str[index])
{
	while(!(str[index] >= 'a' && str[index] <= 'z'))
	{

	if (str[index - 1] == ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}')
	str[idex] -= 32;
	index++;
	}
}
	return (str)
}
