#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 * @argc: number of input arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int multi;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	return (0);
}
