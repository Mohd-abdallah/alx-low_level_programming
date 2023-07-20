#include <stdio.h>
#include "main.h"


/**
 * print_alphabet_x10 -  a function that prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	while (i <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
		putchar('\n');
		i++;
	}
}
