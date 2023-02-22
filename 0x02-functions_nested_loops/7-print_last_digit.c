#include "main.h"
/**
 * print_last_digit - this is the main function
 * @n: parameter
 * Return: always 1 or 0
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	return (k);
}
