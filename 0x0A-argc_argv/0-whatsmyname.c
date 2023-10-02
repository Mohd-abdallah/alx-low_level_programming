#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

