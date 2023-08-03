#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion -a function that prints a string in reverse.
 * @s: input
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(strrev(*s));
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
