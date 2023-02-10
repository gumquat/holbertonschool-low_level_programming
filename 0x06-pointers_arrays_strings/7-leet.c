/**
*leet - makes numbers into funny le meme word
*@s: string 
*Return: points to string
*/

char *leet(char *str)
{

	letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	numbers[10] = {'4', '3', '0', '7', '1'];
	int index = 0;

	while (s[index])
	{
		for (index = 0; index < 5; index++)
		{
			if (str == letters[index] || str == letters[index] - 32)
			str = numbers[index];
		}
	}
return (str);
}
