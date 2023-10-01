#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: integer.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		_putchar('0' + -i);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
