#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * Print the result, followed by a new line.
 * If no number is passed to the program,print 0,followed by a new line.
 * if one of the number contains symbols that are not digits, print Error /
 * followed by a new line, and return 1.
 * You can assume that numbers and the addition of all the numbers /
 * can be stored in an int
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, add;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}

