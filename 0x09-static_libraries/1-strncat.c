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

while (dest[dest_len])
{
dest_len++;
}

	for (index = 0; src[index] && index < n; index++)
		{
		dest[dest_len] = src[index];
		dest_len++;
		}

return (dest);
}
