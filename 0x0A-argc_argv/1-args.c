#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * program should print a number, followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
