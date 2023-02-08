/**
*_strncat - adds a string to the end of another string
*@dest: destination for the final string
*@src: the source string
*Return: compounded string inside Dest
*/

char *_strncat(char *dest, char *src, int n)
{

int index = 0;
int dest_len = 0;

	while (dest[index])
	{
		index++;
		dest_len++;
	}
		for (index = 0; src[index] && index < n; index++)
		{
			dest[dest_len] = src[index];
			dest_len++;i
		}
		return (dest);
}
