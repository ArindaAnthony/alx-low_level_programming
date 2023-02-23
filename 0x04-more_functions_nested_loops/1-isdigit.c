#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks for a digit
 * @c: the parameter used in _isdigit
 * Return: always 1 for digit and 0 for nara
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
