#include "main.h"
#include <stdio.h>
/**
 * _memcpy - funcrion
 * @dest: parameter
 * @n: parameter
 * @src: parameter
 * Return: always char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
