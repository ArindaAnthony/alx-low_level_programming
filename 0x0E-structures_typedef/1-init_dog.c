#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function
 * @d: parameter
 * @name: age
 * @age: parameter
 * @owner: parameter
 * Return: always void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
