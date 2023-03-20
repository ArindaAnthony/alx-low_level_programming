#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
int _strlen(char *str);
char *strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - function
 * @str: parameter
 * Return: int
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
		len++;
	return (len);
}
/**strcopy - function
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *strcopy(char *dest, char *src)
{
	int index = 0;

	for (index; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = malloc(sizeof(char) * (_str(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner == malloc(sizeof(char) * (_str(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	doggo->name = strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = strcopy(doggo->owner, owner);
	return (doggo);
}
