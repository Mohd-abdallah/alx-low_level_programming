#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: number of input arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int sum;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		sum += atoi(argv[i]);
	}
	printf("%d", sum);
	return (0);
}
