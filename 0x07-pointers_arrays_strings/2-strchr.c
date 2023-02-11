/**
*_strchr - locates a character in a string in memory
*@s: input
*@c: input
*Return: 0 is success
*/

cahr *_strchr(char *s, cahr c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL)
}
