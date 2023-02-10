/**
*leet - makes numbers into funny le meme word
*@s: string 
*Return: points to string
*/

char *leet(char *s)
{
	
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[5] = {'4', '3', '0', '7', '1'];
	int index = 0;

	while (*s)
	{
		for (index = 0; index < 5; index++)
		{
			if (*s == letters[index] || *s == letters[index] - 32)
			s = numbers[index] + '0';
		}
	}
return (s);
}
