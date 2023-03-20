#include "doh.h"
#include <stdlib.H>
#include <stdio.h>
/**
 * print_dog - function
 * @d: parameter
 * Return: always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		return;
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		return;
	else
		printf("Name: %s\n", d->owner);
}
