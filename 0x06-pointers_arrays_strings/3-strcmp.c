/**
*_strcmp - compares two strings
*@s1: thing 1
*@s2: thing 2
*Return: idk lol
*/

int _strcmp(char *s1, char *s2);
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2)
}
