#include "main.h"

/**
 * string_toupper - function
 * @n: parameter
 * Return: always char
 */
char *string_toupper(char *n)
{
	int index = 0;

	while (n[index])
	{
		if (n[index] >= 'a' && n[index] <= 'z')
		{
			n[index] -= 32;
			index++;
		}
	}
	return (n);
}
