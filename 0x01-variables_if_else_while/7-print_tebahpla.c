#include <stdio.h>


/**
 * main - Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar('%c', alph);
	}
	 putchar('\n');
	return (0);
}
