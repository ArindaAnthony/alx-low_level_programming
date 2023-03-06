#include "main.h"
#include <stdio.h>
/**
 * _strspn - function
 * @s: parameter
 * @accept: parater
 * Return: always char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
		else if (accept[1 + r] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
}
