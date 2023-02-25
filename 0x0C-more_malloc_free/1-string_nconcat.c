/**
 *string_nconcat - concatonates two strings using pointers
 *@s1: string 1
 *@s2: string 2
 *@n: max length of string 2 that can be moved
 *Return: pointer
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int s1Len, s2Len, bufferLen, index = 0;
	char *pointer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	/*this line gets the length of the first string*/
	/*and stores that value in s1Len*/
	while (s1[s1Len])
		s1Len++;
	/*this line gets the length of the second string*/
	/*and stores that value in s2Len*/
	while (s2[s2Len])
		s2Len++;
	/*this value checks if the second string is larger than n*/
	/*if it is, we set the value of s2Len to the value of n to shorten it*/
	/*because only n bytes of s2 are allowed to be put in memory*/
	if (s2Len > n)
		s2Len = n;
	/*this sets bufferLen to the size of s1 and s2 together*/
	bufferLen = s1Len + s2Len;
	/*this line allocates an area of memory with the exact amount we*/
	/*need to store string 1 and n amount of bytes of string 2*/
	/*as well as an extra space to put a null character at the end*/
	pointer = malloc(sizeof(char) * (bufferLen + 1));
	/*if our pointer shows that there is no memory there, return NULL*/
	if (pointer == NULL)
		return (NULL);
	/*this line resets s1Len so we can use it as a counter*/
	/*that iterates through the string in s1 on the next line*/
	s1Len = 0;
	/*this line puts the string from s1 into newly allocated memory*/
	for (index = 0; s1[index]; index++)
		pointer[s1Len++] = s1[index];
	/*this string fills the rest of the allocated memory with*/
	/* the string from s2, and makes sure we don't write over the final spot*/
	/* because we want to put a null character there*/
	for (index = 0; s2[index] && index <= bufferLen; index++)
		pointer[s1Len++] = s2[index];

	pointer[s1Len] = '\0';

	return (pointer);
}
