#include "main.h"
/**
 *  _abs - this is the main function
 *  @n: parameter
 *  Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	else if (n >= 0)
		n = n;
	return (n);
}
