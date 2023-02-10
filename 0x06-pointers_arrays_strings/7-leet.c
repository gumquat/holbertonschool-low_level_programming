/**
*leet - makes numbers into funny le meme word
*@s: string
*Return: points to string
*/

char *leet(char *s)
{
	char *sclone = s;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {4, 3, 0, 7, 1};
	int index = 0;

	while (*s)
	{
		for (index = 0; index < 5; index++)
		{
			if (*s == letters[index] || *s == letters[index] - 32)
			*s = numbers[index] + '0';
		}
	s++;
	}
return (sclone);
}
