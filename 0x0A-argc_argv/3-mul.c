#include <stdio.h>

/**
 * main -  a program that multiplies two numbers.
 * @argc: number of input arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int multi;

	if (i < argc)
	{
		multi = argv[i] * argv[i + 1];
	}
	printf("%d", multi);
	return (0);
}
