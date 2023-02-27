/**
 * _calloc - allocates memory for an array using malloc
 *@nmemb: number of members
 *@size: size of thing passed
 *
 * Return: null on failures
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int index = 0;
char *pointer;

if (nmemb == 0 || size == 0)
	return (NULL);

pointer = malloc(nmemb * size);

if (pointer == NULL)
	return (NULL);

for (index = 0; index < nmemb * size; index++)
	pointer[index] = 0;

	return (pointer);
}
