#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function
 * @s: parameter
 * Return: always void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
