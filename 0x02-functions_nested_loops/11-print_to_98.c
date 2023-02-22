#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this is a function
 * @n: this is a parameter
 * Return: always 3
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (i < 99)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			if (i != 98)
				printf(", ");
		}
	}
	if (i >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
