#include <stdio.h>


/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';
	while (alph <= 'z' && (!= 'e' && 'q'))
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
