/**
*_memcpy - copy something from memory
*@dest: input
*@src: input
*@n: input
*Return: 0 is success
*/

char *_memcpy(char *dest, char *src, unsigned int n);
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
