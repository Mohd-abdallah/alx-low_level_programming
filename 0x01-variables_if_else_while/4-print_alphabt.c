#include <stdio.h>


/**
 * main - a program that prints the alphabet in lowercase,
 *  and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (!(alph == 'e') || !(alph == 'q'))
		{
			putchar(alph);
		}
	}
	putchar(10);
	return (0);
}
