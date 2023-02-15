/**
*_strlen_recursion - returns the length of a string
*@s: pointer to string
*Return: length of a string
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);

}
