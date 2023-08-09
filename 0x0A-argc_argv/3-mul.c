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
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		multi = num1 * num2;
		printf("%d\n", multi);
	}
	return (0);
}
