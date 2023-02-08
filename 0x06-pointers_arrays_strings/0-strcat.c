/**
*_strcat - adds a string to the end of another string
*@dest: destination for the final string
*@src: the source string
*/

char *_strcat(char *dest, char * src)
{

int butt = 0;
int pp;

while (dest[butt])
{
butt++;
}

while (src[pp] != 0)
{
dest[butt] = src[pp];
butt++;
pp++;
}
dest[butt] = '\0';
return (dest);
