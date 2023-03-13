#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * create_array - function
 * @c: parameter
 * @size: parameter
 * Return: char or NULL when size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
		array[size] = c;
	return (array);
}
