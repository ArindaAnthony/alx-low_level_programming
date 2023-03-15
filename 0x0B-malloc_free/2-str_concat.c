#include "main.h"
#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - string conc function
 * @s1: parameter
 * @s2: parameter
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
				i++;
				j++;
		}
	}
	s3[j] = '\0';
	return (s3);
}
