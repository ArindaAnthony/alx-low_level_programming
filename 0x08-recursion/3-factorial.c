#include "main.h"
/**
 * factorial - function
 * @n: parameter
 * @Return: always int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - i));
}
