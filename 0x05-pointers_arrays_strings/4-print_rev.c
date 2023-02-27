#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: parameter
 * Return: always void
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (n = n - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
