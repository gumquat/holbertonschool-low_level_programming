/**
*_memset - fills memory with a constant byte
*@s: string thats pointed to
*@b: string
*@n: variable thats unassaigned
*Returns: a pointer to the memory asrea s
*/

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{

int index = 0;
unsigned int i;
for (index = 0; index < n; index++)
{
i++;	
s[i] = b;
}
return (s);
}
