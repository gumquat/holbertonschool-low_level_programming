/**
*_strcat - adds a string to the end of another string
*@dest: destination for the final string
*@src: the source string
*Return: compounded string inside Dest
*/

char *_strcat(char *dest, char * src)
{

int index = 0;
int dest_len = 0;

	while (dest[index])
	{
		index++;
		dest_len++;
	}
		for (index = 0; src[index] && index < dest_len; index++)
		{
			dest[dest_len++] = src[index];
		}
		return (dest);
}
