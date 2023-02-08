/**
*_strncat - adds a string to the end of another string
*@dest: destination for the final string
*@src: the source string
*@n: the number of bytes from src to be put into dest
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
		n++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[n++] = src[index];
	}
	
return (dest);
}
