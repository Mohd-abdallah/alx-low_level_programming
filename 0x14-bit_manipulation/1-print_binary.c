#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * You are not allowed to use arrays.
 * You are not allowed to use malloc.
 * You are not allowed to use the % or / operators.
 * @n: integer.
 */
void print_binary(unsigned long int n)
{
	int digit;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	digit = n & 1;
	_putchar(digit + '0');
}
