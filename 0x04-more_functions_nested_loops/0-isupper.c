#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - function checks if char is upper or lowercase
 * @c: parameter used
 * Return: always 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
