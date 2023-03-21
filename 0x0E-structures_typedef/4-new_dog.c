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
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
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
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcopy(dog->name, name);
	strcopy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
