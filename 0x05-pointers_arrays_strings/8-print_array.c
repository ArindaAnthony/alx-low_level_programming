#include "main.h"
#include <stdio.h>
/**
 * print_array - fins
 * @a: parameter
 * @n: parameter
 * Return: always void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n-1)
			printf(", ");
	}
	printf("\n");
}
