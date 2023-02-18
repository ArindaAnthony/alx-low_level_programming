#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	char b;
	float c;

	printf("Size of a char: %zu byte(s)\n", sizeof(b));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long int: 4 byte(s)\n");
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: %zu byte(s)\n", sizeof(c));
	return (0);
}
