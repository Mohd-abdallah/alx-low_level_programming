#include <stdio.h>
#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * Returns 1 and prints + if n is greater than zero.
 * Returns 0 and prints 0 if n is zero.
 * Returns -1 and prints - if n is less than zero
 *
 * @n: number to be checked.
 * Return: an integer.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (0);
}

