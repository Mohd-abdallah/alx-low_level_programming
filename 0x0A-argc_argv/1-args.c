#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: number of input arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc);
	return (0);
}
