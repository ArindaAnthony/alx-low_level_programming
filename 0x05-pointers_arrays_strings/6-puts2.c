#include "main.h"
#include <stdio.h>
/**
 * puts2 - this is the main f
 * @str: parameter
 * Return: always void
 */
void puts2(char *str)
{
	int i, j;

	j = 0;
	while (str[j] != '\0')
		j++;
	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
