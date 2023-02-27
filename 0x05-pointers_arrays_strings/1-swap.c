#include "main.h"
#include <stdio.h>
/**
 * swap_int - function swaps values of two integers
 * @a: parameter
 * @b: parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
