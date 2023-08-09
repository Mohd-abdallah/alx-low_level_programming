#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: input
 * @argv: array
 * Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
