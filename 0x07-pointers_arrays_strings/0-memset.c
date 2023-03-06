#include "main.h"
#include <stdio.h>
/**
 * _memset - this is a function
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: always char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
