#include <stdio.h>
#include "main.h"


/**
 * main - a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	while (i <= 0)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
		putchar('\n');
	}
		i++;
	}
}
