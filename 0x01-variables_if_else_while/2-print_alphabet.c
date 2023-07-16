#include <stdio.h>


/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
