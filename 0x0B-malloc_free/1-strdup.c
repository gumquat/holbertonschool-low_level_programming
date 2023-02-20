/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter
 *@str: the string to duplicate
 *Return: the duplicated string
 */

#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{

int counter;
int index;
char *pointer;

if (str == NULL)
{
return (NULL);
}

while (str[index])
{
index++;
}

pointer = malloc((sizeof(char) * index) +1);

if (pointer == NULL)
{
return (NULL);
}

while (counter < index)
{
pointer[counter] = str[counter];
counter++;
}

pointer[counter] = '\0';
return (pointer);

}
