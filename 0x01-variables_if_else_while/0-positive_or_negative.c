#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this is the main function
 * Return: always 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d, is positive", n);
	else if (n == 0)
		printf("%d, is zero", n);
	else
		printf("%d, is negative", n);
	return (0);
}
