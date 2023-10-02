#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * Your program should print the result of the multiplication, followed by a new line.
 * You can assume that the two numbers and result of the multiplication /
 * can be stored in an integer.
 * If the program does not receive two arguments, your program should print Error /
 * followed by a new line, and return 1.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Retrun: 0
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

