/**
*_memset - fills memory with a constant byte
*@s: string thats pointed to
*@b: string
*@n: variable thats unassaigned
*Returns: pointer to new filled memory
*/

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
