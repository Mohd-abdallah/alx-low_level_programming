#include <stdio.h>


/**
 * main - Write a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
