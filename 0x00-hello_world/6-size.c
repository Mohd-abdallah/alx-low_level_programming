#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is
 * compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int n;
	float f;

	printf("Size of a char: %c.\n", sizeof(c));
	printf("Size of an int: %lu.\n", sizeof(i));
	printf("Size of a long int: %lu.\n", sizeof(l));
	printf("Size of a long long int: %lu.\n", sizeof(n));
	printf("Size of a float: %lu.\n", sizeof(f));
	return (0);
}
