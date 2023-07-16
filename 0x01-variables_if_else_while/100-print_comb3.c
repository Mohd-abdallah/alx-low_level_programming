#include <stdio.h>


/**
 * main - a program that prints all possible different combinations
 * of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar(i + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
