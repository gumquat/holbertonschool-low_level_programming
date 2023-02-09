/**
*string_toupper - changes lowercase letters in a string to upper case
*@str: string that needs changing
*Return: a pointer to the string after its been changed
*/

char *string_toupper(char *str)
{

	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
