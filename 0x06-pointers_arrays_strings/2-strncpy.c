/**
*_strncpy - copies a string
*@dest: buffer zone for putting a string copy
*@src: source of the string needed to be copied
*@n: maximum bytes allowed to be copied
*Return: a pointer to the new string 
*/

char *_strncpy(char *dest, char *src, int n)
{

int index = 0;
int src_len;

while (src[src_len])
{
src_len++;
}

for (index = 0; scr[index] && index < n; index++)
{
dest[index] = src[index];
}

_putchar ('\0');

return (dest);
}
