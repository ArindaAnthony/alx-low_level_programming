#include "string.h"
#include "main.h"
/**
 * _strcmp - function
 * @s1: parameter
 * @s2: parameter
 * Return: alwats char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
