#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses string
 * @s: parameter
 * Return: always void
 */
void rev_string(char *s)
{
	int a, b;
	char c;

	b = 0;
	a = 0;
	while (s[b++])
		a++;
	for (b = a - 1; b >= a / 2; b--)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
	}
}
