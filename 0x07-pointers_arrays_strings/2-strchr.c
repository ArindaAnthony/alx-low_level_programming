#include "main.h"
#include <stdio.h>
/**
 * _strchr - function
 * @c: parameter
 * @s: parameter
 * Return: alway char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
