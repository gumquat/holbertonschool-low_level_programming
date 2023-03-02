#include <stdio.h>
#include "dog.h"

int _strlength(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/*fucntion that returns length of a string*/
int _strlength(char *str)
{
	int length = 0;

	while(*str)
	{	str++;
		length++;
	}
	return (length);
}
/*function that copies a string*/
char *_strcopy(char *dest, char *srs);
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

/*function that makes a spot in memory for a new structure*/
/*then puts a new dog and its info in to that structure*/
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

	caramon->name = malloc(sizeof(char) * (_strl(name) + 1));
		if (caramon->name == NULL)
		{
			free(caramon);
			return NULL;
		}	

	caramon->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (caramon->owner == NULL)
		{
			free(caramon->name);
			free(caramon);
			return (NULL);
		}

		caramon->name = _strcopy(doggo->caramon, caramon);
		caramon->age = age;
		caramon->owner = _strcopy(doggo->owner, caramon);

		return (caramon);
}


