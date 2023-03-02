#include <stdlib.h>
#include "dog.h"

int _strlength(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 *_strlen - gets the length of a string passed thru it
 *@str: string passed thru
 *Return: string length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

/**
 *_strcopy - copies a string into a buffer pointed at by dest
 * @dest: buffer destination for copied string
 * @src: source string
 * Return: copied string
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}

/**
 *new_dog - creates a new struct for info about a newly made dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner name
 *Return: null on failure, otherwise pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *caramon;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	caramon = malloc(sizeof(dog_t));
	if (caramon == NULL)
		return (NULL);

	caramon->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (caramon->name == NULL)
		{
			free(caramon);
			return (NULL);
		}

	caramon->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (caramon->owner == NULL)
		{
			free(caramon->name);
			free(caramon);
			return (NULL);
		}

		caramon->name = _strcopy(caramon->name, name);
		caramon->age = age;
		caramon->owner = _strcopy(caramon->name, owner);

		return (caramon);
}


