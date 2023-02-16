/**
*_strspn - gets the length of a prefix substring
*@s: input
*@accept: input
*Return: 0 is success
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int t = 0;
	unsigned int b;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
				b++;
		}
			a++;
	}
return (t);
}
