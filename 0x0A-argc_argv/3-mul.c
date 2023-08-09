#include <stdio.h>

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
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d", multi);
	return (0);
}
