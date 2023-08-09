#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: input
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc == 6)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
