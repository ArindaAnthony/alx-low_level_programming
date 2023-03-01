#include "main.h"

/**
 * _strncpy - this is the main function
 * @dest: parameter
 * @src: parameter
 * @n: parameteur
 * Return: always string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
