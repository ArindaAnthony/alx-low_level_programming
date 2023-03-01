#include <stdio.h>
#include "main.h"
/**
 * _strncat - this is the main function
 * @dest: parameter
 * @src: parameter
 * @n: parameteur
 * Return: always string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
